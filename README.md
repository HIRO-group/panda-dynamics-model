Python 3 wrapper for [Panda's dynamics model](https://github.com/marcocognetti/FrankaEmikaPandaDynModel).
-
4 functions:
* `[7x7] <- get_coriolis_matrix(q [7x1], dq [7x1])`
* `[7x1] <- get_friction_torques(q [7x1])`
* `[7x1] <- get_gravity_vector(q [7x1])`
* `[7x7] <- get_mass_matrix(q [7x1])`


Install Eigen3: `sudo apt install libeigen3-dev`

`sudo cp -r /usr/include/eigen3/Eigen /usr/include`

Install pybind: `pip install pybind11`

Install the wrapper: `git clone git@github.com:HIRO-group/panda-dynamics-model.git && pip install panda-dynamics-model`

Example:
```python
import numpy as np
import panda_dynamics_model as pdm

print(pdm.get_friction_torques(np.random.uniform(size=7)))
```
