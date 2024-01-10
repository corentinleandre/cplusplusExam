//
// Created by coren on 10/01/2024.
//

#ifndef CPLUSPLUSEXAM_KNN_H
#define CPLUSPLUSEXAM_KNN_H

#include <vector>
#include <map>
using namespace std;

template<class T>
class KNN{
private:
    int k;
public:
    int getK() const;
    vector<int> findNearestNeighbours(vector<T>& trainData, T& target){
        map<double, int> map;
        vector<int> ret;
        vector<double> similarities;
        double similarity;
        for(unsigned int i = 0; i < trainData.size(); i++){
            T t = trainData[i];
            similarity = similarityMeasure(t, target);
            map.emplace(similarity, i);
            similarities.insert(std::lower_bound(similarities.begin(), similarities.end(), similarity), similarity);
        }
        for(unsigned int j = 0; j < k; j++ ){
            ret.emplace_back(map.at(similarities[j]));
        }
        return ret;
    }
    virtual double similarityMeasure(T&, T&) = 0;
};

template<class T>
int KNN<T>::getK() const {
    return k;
}

#endif //CPLUSPLUSEXAM_KNN_H
