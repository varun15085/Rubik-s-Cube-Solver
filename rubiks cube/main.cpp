#include <bits/stdc++.h>
#include "Generic_rubics_cube_solver.h"
#include "RubiksCube3d.cpp"
#include "DFSSolver.h"


using namespace std;

int main() {

    RubiksCube3dArray object3DArray;

    vector<RubiksCube::MOVE> random_shuffleMove=object3DArray.randomShuffleCube(8);
    for(auto v:random_shuffleMove){
        cout<<object3DArray.getMove(v)<<" ";
    }
    cout<<endl;

    DFSSolver<RubiksCube3dArray,Hash3d> dfssolver(object3DArray,15);
    vector<RubiksCube::MOVE> movestosolve=dfssolver.solve();
    dfssolver.rubiksCube.print();
    for(auto moves:movestosolve) cout<<object3DArray.getMove(moves)<<" ";
    cout<<endl;

//   RubiksCube3dArray object3DArray;
//   object3DArray.print();
//   object3DArray.b();
//
//vector<RubiksCube::MOVE> arr=object3DArray.randomShuffleCube(4);
//
//  for(auto v:arr){
//      cout<<object3DArray.getMove(v)<<" ";
//  }

//RubiksCube1dArray object1DArray;
//object1DArray.print();
//object1DArray.lPrime();
//    object1DArray.print();

    return 0;
}
