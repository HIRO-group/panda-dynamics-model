#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include "franka_model.h"

PYBIND11_MODULE(panda_dynamics_model, m) {
    m.doc() = "Dynamics Model for the Franka Emika Panda robot";

    m.def("get_coriolis_matrix", &CoriolisMatrix, "Coriolis matrix.");
    m.def("get_friction_torques", &Friction, "Friction torques.");
    m.def("get_gravity_vector", &GravityVector, "Gravity vector.");
    m.def("get_mass_matrix", &MassMatrix, "Mass matrix.");
}