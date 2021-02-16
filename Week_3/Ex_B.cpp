#include <iostream>
#include <string>
#include <vector>
#include <tuple>


using namespace std;

int main() {
    int N, M, K, a, b, status;
    cin >> N;
    cin >> M;
    cin >> K;

    vector <tuple < int, int > > coord_list;

    vector <vector <int> > coord;
    coord.reserve(2 * N);

    vector <int> coord_row(100, 0);

    vector <vector <int> > field;
    field.reserve(2 * N);

    vector <int> field_row;
    field_row.reserve(100);

    for (int i = 0; i < K; i++) {
        cin >> a;
        cin >> b;

        tuple <int, int> coord;
        coord = make_tuple(a, b);
        coord_list.push_back(coord);
    }

    for (int i = 0; i < N; i++) {
        coord_row = coord[i];
        for (int k = 0; k < M; k++) {
            if
        }
        cout << '\n';
    }


    return 0 ;
}