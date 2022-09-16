#include "franka_model.h"

using namespace std;

Eigen::Matrix7d CoriolisMatrix(const Eigen::Vector7d &q, const Eigen::Vector7d &dq)
{

  static Eigen::Matrix7d S;

  S.row(0) = Coriolis_row0(q, dq);
  S.row(1) = Coriolis_row1(q, dq);
  S.row(2) = Coriolis_row2(q, dq);
  S.row(3) = Coriolis_row3(q, dq);
  S.row(4) = Coriolis_row4(q, dq);
  S.row(5) = Coriolis_row5(q, dq);
  S.row(6) = Coriolis_row6(q, dq);

  return S;
}