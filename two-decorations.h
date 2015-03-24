#ifndef TWO_DECORATIONS_H

const int d_len[12] = {1,2,3,5,8,13,21,34,55,89,144,233};

const int d2[2][2]={
{2,0},{1,1}
};
const int d3[3][3]={
{2,1,0},{1,2,0},{1,1,1}
};
const int d4[5][4]={
{2,2,0,0},{2,1,1,0},{1,2,1,0},{1,1,2,0},{1,1,1,1}
};
const int d5[8][5]={
{2,2,1,0,0},{2,1,2,0,0},{1,2,2,0,0},{2,1,1,1,0},{1,2,1,1,0},{1,1,2,1,0},{1,1,1,2,0},{1,1,1,1,1}
};
const int d6[13][6]={
{2,2,2,0,0,0},{2,2,1,1,0,0},{2,1,2,1,0,0},{2,1,1,2,0,0},{1,2,2,1,0,0},{1,2,1,2,0,0},{1,1,2,2,0,0},{2,1,1,1,1,0},{1,2,1,1,1,0},{1,1,2,1,1,0},{1,1,1,2,1,0},{1,1,1,1,2,0},{1,1,1,1,1,1}
};
const int d7[21][7]={
{2,2,2,1,0,0,0},{2,2,1,2,0,0,0},{2,1,2,2,0,0,0},{1,2,2,2,0,0,0},{2,2,1,1,1,0,0},{2,1,2,1,1,0,0},{2,1,1,2,1,0,0},{2,1,1,1,2,0,0},{1,2,2,1,1,0,0},{1,2,1,2,1,0,0},{1,2,1,1,2,0,0},{1,1,2,2,1,0,0},{1,1,2,1,2,0,0},{1,1,1,2,2,0,0},{2,1,1,1,1,1,0},{1,2,1,1,1,1,0},{1,1,2,1,1,1,0},{1,1,1,2,1,1,0},{1,1,1,1,2,1,0},{1,1,1,1,1,2,0},{1,1,1,1,1,1,1}
};
const int d8[34][8]={
{2,2,2,2,0,0,0,0},{2,2,2,1,1,0,0,0},{2,2,1,2,1,0,0,0},{2,2,1,1,2,0,0,0},{2,1,2,2,1,0,0,0},{2,1,2,1,2,0,0,0},{2,1,1,2,2,0,0,0},{1,2,2,2,1,0,0,0},{1,2,2,1,2,0,0,0},{1,2,1,2,2,0,0,0},{1,1,2,2,2,0,0,0},{2,2,1,1,1,1,0,0},{2,1,2,1,1,1,0,0},{2,1,1,2,1,1,0,0},{2,1,1,1,2,1,0,0},{2,1,1,1,1,2,0,0},{1,2,2,1,1,1,0,0},{1,2,1,2,1,1,0,0},{1,2,1,1,2,1,0,0},{1,2,1,1,1,2,0,0},{1,1,2,2,1,1,0,0},{1,1,2,1,2,1,0,0},{1,1,2,1,1,2,0,0},{1,1,1,2,2,1,0,0},{1,1,1,2,1,2,0,0},{1,1,1,1,2,2,0,0},{2,1,1,1,1,1,1,0},{1,2,1,1,1,1,1,0},{1,1,2,1,1,1,1,0},{1,1,1,2,1,1,1,0},{1,1,1,1,2,1,1,0},{1,1,1,1,1,2,1,0},{1,1,1,1,1,1,2,0},{1,1,1,1,1,1,1,1}
};
const int d9[55][9]={
{2,2,2,2,1,0,0,0,0},{2,2,2,1,2,0,0,0,0},{2,2,1,2,2,0,0,0,0},{2,1,2,2,2,0,0,0,0},{1,2,2,2,2,0,0,0,0},{2,2,2,1,1,1,0,0,0},{2,2,1,2,1,1,0,0,0},{2,2,1,1,2,1,0,0,0},{2,2,1,1,1,2,0,0,0},{2,1,2,2,1,1,0,0,0},{2,1,2,1,2,1,0,0,0},{2,1,2,1,1,2,0,0,0},{2,1,1,2,2,1,0,0,0},{2,1,1,2,1,2,0,0,0},{2,1,1,1,2,2,0,0,0},{1,2,2,2,1,1,0,0,0},{1,2,2,1,2,1,0,0,0},{1,2,2,1,1,2,0,0,0},{1,2,1,2,2,1,0,0,0},{1,2,1,2,1,2,0,0,0},{1,2,1,1,2,2,0,0,0},{1,1,2,2,2,1,0,0,0},{1,1,2,2,1,2,0,0,0},{1,1,2,1,2,2,0,0,0},{1,1,1,2,2,2,0,0,0},{2,2,1,1,1,1,1,0,0},{2,1,2,1,1,1,1,0,0},{2,1,1,2,1,1,1,0,0},{2,1,1,1,2,1,1,0,0},{2,1,1,1,1,2,1,0,0},{2,1,1,1,1,1,2,0,0},{1,2,2,1,1,1,1,0,0},{1,2,1,2,1,1,1,0,0},{1,2,1,1,2,1,1,0,0},{1,2,1,1,1,2,1,0,0},{1,2,1,1,1,1,2,0,0},{1,1,2,2,1,1,1,0,0},{1,1,2,1,2,1,1,0,0},{1,1,2,1,1,2,1,0,0},{1,1,2,1,1,1,2,0,0},{1,1,1,2,2,1,1,0,0},{1,1,1,2,1,2,1,0,0},{1,1,1,2,1,1,2,0,0},{1,1,1,1,2,2,1,0,0},{1,1,1,1,2,1,2,0,0},{1,1,1,1,1,2,2,0,0},{2,1,1,1,1,1,1,1,0},{1,2,1,1,1,1,1,1,0},{1,1,2,1,1,1,1,1,0},{1,1,1,2,1,1,1,1,0},{1,1,1,1,2,1,1,1,0},{1,1,1,1,1,2,1,1,0},{1,1,1,1,1,1,2,1,0},{1,1,1,1,1,1,1,2,0},{1,1,1,1,1,1,1,1,1}
};
const int d10[89][10]={
{2,2,2,2,2,0,0,0,0,0},{2,2,2,2,1,1,0,0,0,0},{2,2,2,1,2,1,0,0,0,0},{2,2,2,1,1,2,0,0,0,0},{2,2,1,2,2,1,0,0,0,0},{2,2,1,2,1,2,0,0,0,0},{2,2,1,1,2,2,0,0,0,0},{2,1,2,2,2,1,0,0,0,0},{2,1,2,2,1,2,0,0,0,0},{2,1,2,1,2,2,0,0,0,0},{2,1,1,2,2,2,0,0,0,0},{1,2,2,2,2,1,0,0,0,0},{1,2,2,2,1,2,0,0,0,0},{1,2,2,1,2,2,0,0,0,0},{1,2,1,2,2,2,0,0,0,0},{1,1,2,2,2,2,0,0,0,0},{2,2,2,1,1,1,1,0,0,0},{2,2,1,2,1,1,1,0,0,0},{2,2,1,1,2,1,1,0,0,0},{2,2,1,1,1,2,1,0,0,0},{2,2,1,1,1,1,2,0,0,0},{2,1,2,2,1,1,1,0,0,0},{2,1,2,1,2,1,1,0,0,0},{2,1,2,1,1,2,1,0,0,0},{2,1,2,1,1,1,2,0,0,0},{2,1,1,2,2,1,1,0,0,0},{2,1,1,2,1,2,1,0,0,0},{2,1,1,2,1,1,2,0,0,0},{2,1,1,1,2,2,1,0,0,0},{2,1,1,1,2,1,2,0,0,0},{2,1,1,1,1,2,2,0,0,0},{1,2,2,2,1,1,1,0,0,0},{1,2,2,1,2,1,1,0,0,0},{1,2,2,1,1,2,1,0,0,0},{1,2,2,1,1,1,2,0,0,0},{1,2,1,2,2,1,1,0,0,0},{1,2,1,2,1,2,1,0,0,0},{1,2,1,2,1,1,2,0,0,0},{1,2,1,1,2,2,1,0,0,0},{1,2,1,1,2,1,2,0,0,0},{1,2,1,1,1,2,2,0,0,0},{1,1,2,2,2,1,1,0,0,0},{1,1,2,2,1,2,1,0,0,0},{1,1,2,2,1,1,2,0,0,0},{1,1,2,1,2,2,1,0,0,0},{1,1,2,1,2,1,2,0,0,0},{1,1,2,1,1,2,2,0,0,0},{1,1,1,2,2,2,1,0,0,0},{1,1,1,2,2,1,2,0,0,0},{1,1,1,2,1,2,2,0,0,0},{1,1,1,1,2,2,2,0,0,0},{2,2,1,1,1,1,1,1,0,0},{2,1,2,1,1,1,1,1,0,0},{2,1,1,2,1,1,1,1,0,0},{2,1,1,1,2,1,1,1,0,0},{2,1,1,1,1,2,1,1,0,0},{2,1,1,1,1,1,2,1,0,0},{2,1,1,1,1,1,1,2,0,0},{1,2,2,1,1,1,1,1,0,0},{1,2,1,2,1,1,1,1,0,0},{1,2,1,1,2,1,1,1,0,0},{1,2,1,1,1,2,1,1,0,0},{1,2,1,1,1,1,2,1,0,0},{1,2,1,1,1,1,1,2,0,0},{1,1,2,2,1,1,1,1,0,0},{1,1,2,1,2,1,1,1,0,0},{1,1,2,1,1,2,1,1,0,0},{1,1,2,1,1,1,2,1,0,0},{1,1,2,1,1,1,1,2,0,0},{1,1,1,2,2,1,1,1,0,0},{1,1,1,2,1,2,1,1,0,0},{1,1,1,2,1,1,2,1,0,0},{1,1,1,2,1,1,1,2,0,0},{1,1,1,1,2,2,1,1,0,0},{1,1,1,1,2,1,2,1,0,0},{1,1,1,1,2,1,1,2,0,0},{1,1,1,1,1,2,2,1,0,0},{1,1,1,1,1,2,1,2,0,0},{1,1,1,1,1,1,2,2,0,0},{2,1,1,1,1,1,1,1,1,0},{1,2,1,1,1,1,1,1,1,0},{1,1,2,1,1,1,1,1,1,0},{1,1,1,2,1,1,1,1,1,0},{1,1,1,1,2,1,1,1,1,0},{1,1,1,1,1,2,1,1,1,0},{1,1,1,1,1,1,2,1,1,0},{1,1,1,1,1,1,1,2,1,0},{1,1,1,1,1,1,1,1,2,0},{1,1,1,1,1,1,1,1,1,1}
};
const int d11[144][11]={
{2,2,2,2,2,1,0,0,0,0,0},{2,2,2,2,1,2,0,0,0,0,0},{2,2,2,1,2,2,0,0,0,0,0},{2,2,1,2,2,2,0,0,0,0,0},{2,1,2,2,2,2,0,0,0,0,0},{1,2,2,2,2,2,0,0,0,0,0},{2,2,2,2,1,1,1,0,0,0,0},{2,2,2,1,2,1,1,0,0,0,0},{2,2,2,1,1,2,1,0,0,0,0},{2,2,2,1,1,1,2,0,0,0,0},{2,2,1,2,2,1,1,0,0,0,0},{2,2,1,2,1,2,1,0,0,0,0},{2,2,1,2,1,1,2,0,0,0,0},{2,2,1,1,2,2,1,0,0,0,0},{2,2,1,1,2,1,2,0,0,0,0},{2,2,1,1,1,2,2,0,0,0,0},{2,1,2,2,2,1,1,0,0,0,0},{2,1,2,2,1,2,1,0,0,0,0},{2,1,2,2,1,1,2,0,0,0,0},{2,1,2,1,2,2,1,0,0,0,0},{2,1,2,1,2,1,2,0,0,0,0},{2,1,2,1,1,2,2,0,0,0,0},{2,1,1,2,2,2,1,0,0,0,0},{2,1,1,2,2,1,2,0,0,0,0},{2,1,1,2,1,2,2,0,0,0,0},{2,1,1,1,2,2,2,0,0,0,0},{1,2,2,2,2,1,1,0,0,0,0},{1,2,2,2,1,2,1,0,0,0,0},{1,2,2,2,1,1,2,0,0,0,0},{1,2,2,1,2,2,1,0,0,0,0},{1,2,2,1,2,1,2,0,0,0,0},{1,2,2,1,1,2,2,0,0,0,0},{1,2,1,2,2,2,1,0,0,0,0},{1,2,1,2,2,1,2,0,0,0,0},{1,2,1,2,1,2,2,0,0,0,0},{1,2,1,1,2,2,2,0,0,0,0},{1,1,2,2,2,2,1,0,0,0,0},{1,1,2,2,2,1,2,0,0,0,0},{1,1,2,2,1,2,2,0,0,0,0},{1,1,2,1,2,2,2,0,0,0,0},{1,1,1,2,2,2,2,0,0,0,0},{2,2,2,1,1,1,1,1,0,0,0},{2,2,1,2,1,1,1,1,0,0,0},{2,2,1,1,2,1,1,1,0,0,0},{2,2,1,1,1,2,1,1,0,0,0},{2,2,1,1,1,1,2,1,0,0,0},{2,2,1,1,1,1,1,2,0,0,0},{2,1,2,2,1,1,1,1,0,0,0},{2,1,2,1,2,1,1,1,0,0,0},{2,1,2,1,1,2,1,1,0,0,0},{2,1,2,1,1,1,2,1,0,0,0},{2,1,2,1,1,1,1,2,0,0,0},{2,1,1,2,2,1,1,1,0,0,0},{2,1,1,2,1,2,1,1,0,0,0},{2,1,1,2,1,1,2,1,0,0,0},{2,1,1,2,1,1,1,2,0,0,0},{2,1,1,1,2,2,1,1,0,0,0},{2,1,1,1,2,1,2,1,0,0,0},{2,1,1,1,2,1,1,2,0,0,0},{2,1,1,1,1,2,2,1,0,0,0},{2,1,1,1,1,2,1,2,0,0,0},{2,1,1,1,1,1,2,2,0,0,0},{1,2,2,2,1,1,1,1,0,0,0},{1,2,2,1,2,1,1,1,0,0,0},{1,2,2,1,1,2,1,1,0,0,0},{1,2,2,1,1,1,2,1,0,0,0},{1,2,2,1,1,1,1,2,0,0,0},{1,2,1,2,2,1,1,1,0,0,0},{1,2,1,2,1,2,1,1,0,0,0},{1,2,1,2,1,1,2,1,0,0,0},{1,2,1,2,1,1,1,2,0,0,0},{1,2,1,1,2,2,1,1,0,0,0},{1,2,1,1,2,1,2,1,0,0,0},{1,2,1,1,2,1,1,2,0,0,0},{1,2,1,1,1,2,2,1,0,0,0},{1,2,1,1,1,2,1,2,0,0,0},{1,2,1,1,1,1,2,2,0,0,0},{1,1,2,2,2,1,1,1,0,0,0},{1,1,2,2,1,2,1,1,0,0,0},{1,1,2,2,1,1,2,1,0,0,0},{1,1,2,2,1,1,1,2,0,0,0},{1,1,2,1,2,2,1,1,0,0,0},{1,1,2,1,2,1,2,1,0,0,0},{1,1,2,1,2,1,1,2,0,0,0},{1,1,2,1,1,2,2,1,0,0,0},{1,1,2,1,1,2,1,2,0,0,0},{1,1,2,1,1,1,2,2,0,0,0},{1,1,1,2,2,2,1,1,0,0,0},{1,1,1,2,2,1,2,1,0,0,0},{1,1,1,2,2,1,1,2,0,0,0},{1,1,1,2,1,2,2,1,0,0,0},{1,1,1,2,1,2,1,2,0,0,0},{1,1,1,2,1,1,2,2,0,0,0},{1,1,1,1,2,2,2,1,0,0,0},{1,1,1,1,2,2,1,2,0,0,0},{1,1,1,1,2,1,2,2,0,0,0},{1,1,1,1,1,2,2,2,0,0,0},{2,2,1,1,1,1,1,1,1,0,0},{2,1,2,1,1,1,1,1,1,0,0},{2,1,1,2,1,1,1,1,1,0,0},{2,1,1,1,2,1,1,1,1,0,0},{2,1,1,1,1,2,1,1,1,0,0},{2,1,1,1,1,1,2,1,1,0,0},{2,1,1,1,1,1,1,2,1,0,0},{2,1,1,1,1,1,1,1,2,0,0},{1,2,2,1,1,1,1,1,1,0,0},{1,2,1,2,1,1,1,1,1,0,0},{1,2,1,1,2,1,1,1,1,0,0},{1,2,1,1,1,2,1,1,1,0,0},{1,2,1,1,1,1,2,1,1,0,0},{1,2,1,1,1,1,1,2,1,0,0},{1,2,1,1,1,1,1,1,2,0,0},{1,1,2,2,1,1,1,1,1,0,0},{1,1,2,1,2,1,1,1,1,0,0},{1,1,2,1,1,2,1,1,1,0,0},{1,1,2,1,1,1,2,1,1,0,0},{1,1,2,1,1,1,1,2,1,0,0},{1,1,2,1,1,1,1,1,2,0,0},{1,1,1,2,2,1,1,1,1,0,0},{1,1,1,2,1,2,1,1,1,0,0},{1,1,1,2,1,1,2,1,1,0,0},{1,1,1,2,1,1,1,2,1,0,0},{1,1,1,2,1,1,1,1,2,0,0},{1,1,1,1,2,2,1,1,1,0,0},{1,1,1,1,2,1,2,1,1,0,0},{1,1,1,1,2,1,1,2,1,0,0},{1,1,1,1,2,1,1,1,2,0,0},{1,1,1,1,1,2,2,1,1,0,0},{1,1,1,1,1,2,1,2,1,0,0},{1,1,1,1,1,2,1,1,2,0,0},{1,1,1,1,1,1,2,2,1,0,0},{1,1,1,1,1,1,2,1,2,0,0},{1,1,1,1,1,1,1,2,2,0,0},{2,1,1,1,1,1,1,1,1,1,0},{1,2,1,1,1,1,1,1,1,1,0},{1,1,2,1,1,1,1,1,1,1,0},{1,1,1,2,1,1,1,1,1,1,0},{1,1,1,1,2,1,1,1,1,1,0},{1,1,1,1,1,2,1,1,1,1,0},{1,1,1,1,1,1,2,1,1,1,0},{1,1,1,1,1,1,1,2,1,1,0},{1,1,1,1,1,1,1,1,2,1,0},{1,1,1,1,1,1,1,1,1,2,0},{1,1,1,1,1,1,1,1,1,1,1}
};
const int d12[233][12]={
{2,2,2,2,2,2,0,0,0,0,0,0},{2,2,2,2,2,1,1,0,0,0,0,0},{2,2,2,2,1,2,1,0,0,0,0,0},{2,2,2,2,1,1,2,0,0,0,0,0},{2,2,2,1,2,2,1,0,0,0,0,0},{2,2,2,1,2,1,2,0,0,0,0,0},{2,2,2,1,1,2,2,0,0,0,0,0},{2,2,1,2,2,2,1,0,0,0,0,0},{2,2,1,2,2,1,2,0,0,0,0,0},{2,2,1,2,1,2,2,0,0,0,0,0},{2,2,1,1,2,2,2,0,0,0,0,0},{2,1,2,2,2,2,1,0,0,0,0,0},{2,1,2,2,2,1,2,0,0,0,0,0},{2,1,2,2,1,2,2,0,0,0,0,0},{2,1,2,1,2,2,2,0,0,0,0,0},{2,1,1,2,2,2,2,0,0,0,0,0},{1,2,2,2,2,2,1,0,0,0,0,0},{1,2,2,2,2,1,2,0,0,0,0,0},{1,2,2,2,1,2,2,0,0,0,0,0},{1,2,2,1,2,2,2,0,0,0,0,0},{1,2,1,2,2,2,2,0,0,0,0,0},{1,1,2,2,2,2,2,0,0,0,0,0},{2,2,2,2,1,1,1,1,0,0,0,0},{2,2,2,1,2,1,1,1,0,0,0,0},{2,2,2,1,1,2,1,1,0,0,0,0},{2,2,2,1,1,1,2,1,0,0,0,0},{2,2,2,1,1,1,1,2,0,0,0,0},{2,2,1,2,2,1,1,1,0,0,0,0},{2,2,1,2,1,2,1,1,0,0,0,0},{2,2,1,2,1,1,2,1,0,0,0,0},{2,2,1,2,1,1,1,2,0,0,0,0},{2,2,1,1,2,2,1,1,0,0,0,0},{2,2,1,1,2,1,2,1,0,0,0,0},{2,2,1,1,2,1,1,2,0,0,0,0},{2,2,1,1,1,2,2,1,0,0,0,0},{2,2,1,1,1,2,1,2,0,0,0,0},{2,2,1,1,1,1,2,2,0,0,0,0},{2,1,2,2,2,1,1,1,0,0,0,0},{2,1,2,2,1,2,1,1,0,0,0,0},{2,1,2,2,1,1,2,1,0,0,0,0},{2,1,2,2,1,1,1,2,0,0,0,0},{2,1,2,1,2,2,1,1,0,0,0,0},{2,1,2,1,2,1,2,1,0,0,0,0},{2,1,2,1,2,1,1,2,0,0,0,0},{2,1,2,1,1,2,2,1,0,0,0,0},{2,1,2,1,1,2,1,2,0,0,0,0},{2,1,2,1,1,1,2,2,0,0,0,0},{2,1,1,2,2,2,1,1,0,0,0,0},{2,1,1,2,2,1,2,1,0,0,0,0},{2,1,1,2,2,1,1,2,0,0,0,0},{2,1,1,2,1,2,2,1,0,0,0,0},{2,1,1,2,1,2,1,2,0,0,0,0},{2,1,1,2,1,1,2,2,0,0,0,0},{2,1,1,1,2,2,2,1,0,0,0,0},{2,1,1,1,2,2,1,2,0,0,0,0},{2,1,1,1,2,1,2,2,0,0,0,0},{2,1,1,1,1,2,2,2,0,0,0,0},{1,2,2,2,2,1,1,1,0,0,0,0},{1,2,2,2,1,2,1,1,0,0,0,0},{1,2,2,2,1,1,2,1,0,0,0,0},{1,2,2,2,1,1,1,2,0,0,0,0},{1,2,2,1,2,2,1,1,0,0,0,0},{1,2,2,1,2,1,2,1,0,0,0,0},{1,2,2,1,2,1,1,2,0,0,0,0},{1,2,2,1,1,2,2,1,0,0,0,0},{1,2,2,1,1,2,1,2,0,0,0,0},{1,2,2,1,1,1,2,2,0,0,0,0},{1,2,1,2,2,2,1,1,0,0,0,0},{1,2,1,2,2,1,2,1,0,0,0,0},{1,2,1,2,2,1,1,2,0,0,0,0},{1,2,1,2,1,2,2,1,0,0,0,0},{1,2,1,2,1,2,1,2,0,0,0,0},{1,2,1,2,1,1,2,2,0,0,0,0},{1,2,1,1,2,2,2,1,0,0,0,0},{1,2,1,1,2,2,1,2,0,0,0,0},{1,2,1,1,2,1,2,2,0,0,0,0},{1,2,1,1,1,2,2,2,0,0,0,0},{1,1,2,2,2,2,1,1,0,0,0,0},{1,1,2,2,2,1,2,1,0,0,0,0},{1,1,2,2,2,1,1,2,0,0,0,0},{1,1,2,2,1,2,2,1,0,0,0,0},{1,1,2,2,1,2,1,2,0,0,0,0},{1,1,2,2,1,1,2,2,0,0,0,0},{1,1,2,1,2,2,2,1,0,0,0,0},{1,1,2,1,2,2,1,2,0,0,0,0},{1,1,2,1,2,1,2,2,0,0,0,0},{1,1,2,1,1,2,2,2,0,0,0,0},{1,1,1,2,2,2,2,1,0,0,0,0},{1,1,1,2,2,2,1,2,0,0,0,0},{1,1,1,2,2,1,2,2,0,0,0,0},{1,1,1,2,1,2,2,2,0,0,0,0},{1,1,1,1,2,2,2,2,0,0,0,0},{2,2,2,1,1,1,1,1,1,0,0,0},{2,2,1,2,1,1,1,1,1,0,0,0},{2,2,1,1,2,1,1,1,1,0,0,0},{2,2,1,1,1,2,1,1,1,0,0,0},{2,2,1,1,1,1,2,1,1,0,0,0},{2,2,1,1,1,1,1,2,1,0,0,0},{2,2,1,1,1,1,1,1,2,0,0,0},{2,1,2,2,1,1,1,1,1,0,0,0},{2,1,2,1,2,1,1,1,1,0,0,0},{2,1,2,1,1,2,1,1,1,0,0,0},{2,1,2,1,1,1,2,1,1,0,0,0},{2,1,2,1,1,1,1,2,1,0,0,0},{2,1,2,1,1,1,1,1,2,0,0,0},{2,1,1,2,2,1,1,1,1,0,0,0},{2,1,1,2,1,2,1,1,1,0,0,0},{2,1,1,2,1,1,2,1,1,0,0,0},{2,1,1,2,1,1,1,2,1,0,0,0},{2,1,1,2,1,1,1,1,2,0,0,0},{2,1,1,1,2,2,1,1,1,0,0,0},{2,1,1,1,2,1,2,1,1,0,0,0},{2,1,1,1,2,1,1,2,1,0,0,0},{2,1,1,1,2,1,1,1,2,0,0,0},{2,1,1,1,1,2,2,1,1,0,0,0},{2,1,1,1,1,2,1,2,1,0,0,0},{2,1,1,1,1,2,1,1,2,0,0,0},{2,1,1,1,1,1,2,2,1,0,0,0},{2,1,1,1,1,1,2,1,2,0,0,0},{2,1,1,1,1,1,1,2,2,0,0,0},{1,2,2,2,1,1,1,1,1,0,0,0},{1,2,2,1,2,1,1,1,1,0,0,0},{1,2,2,1,1,2,1,1,1,0,0,0},{1,2,2,1,1,1,2,1,1,0,0,0},{1,2,2,1,1,1,1,2,1,0,0,0},{1,2,2,1,1,1,1,1,2,0,0,0},{1,2,1,2,2,1,1,1,1,0,0,0},{1,2,1,2,1,2,1,1,1,0,0,0},{1,2,1,2,1,1,2,1,1,0,0,0},{1,2,1,2,1,1,1,2,1,0,0,0},{1,2,1,2,1,1,1,1,2,0,0,0},{1,2,1,1,2,2,1,1,1,0,0,0},{1,2,1,1,2,1,2,1,1,0,0,0},{1,2,1,1,2,1,1,2,1,0,0,0},{1,2,1,1,2,1,1,1,2,0,0,0},{1,2,1,1,1,2,2,1,1,0,0,0},{1,2,1,1,1,2,1,2,1,0,0,0},{1,2,1,1,1,2,1,1,2,0,0,0},{1,2,1,1,1,1,2,2,1,0,0,0},{1,2,1,1,1,1,2,1,2,0,0,0},{1,2,1,1,1,1,1,2,2,0,0,0},{1,1,2,2,2,1,1,1,1,0,0,0},{1,1,2,2,1,2,1,1,1,0,0,0},{1,1,2,2,1,1,2,1,1,0,0,0},{1,1,2,2,1,1,1,2,1,0,0,0},{1,1,2,2,1,1,1,1,2,0,0,0},{1,1,2,1,2,2,1,1,1,0,0,0},{1,1,2,1,2,1,2,1,1,0,0,0},{1,1,2,1,2,1,1,2,1,0,0,0},{1,1,2,1,2,1,1,1,2,0,0,0},{1,1,2,1,1,2,2,1,1,0,0,0},{1,1,2,1,1,2,1,2,1,0,0,0},{1,1,2,1,1,2,1,1,2,0,0,0},{1,1,2,1,1,1,2,2,1,0,0,0},{1,1,2,1,1,1,2,1,2,0,0,0},{1,1,2,1,1,1,1,2,2,0,0,0},{1,1,1,2,2,2,1,1,1,0,0,0},{1,1,1,2,2,1,2,1,1,0,0,0},{1,1,1,2,2,1,1,2,1,0,0,0},{1,1,1,2,2,1,1,1,2,0,0,0},{1,1,1,2,1,2,2,1,1,0,0,0},{1,1,1,2,1,2,1,2,1,0,0,0},{1,1,1,2,1,2,1,1,2,0,0,0},{1,1,1,2,1,1,2,2,1,0,0,0},{1,1,1,2,1,1,2,1,2,0,0,0},{1,1,1,2,1,1,1,2,2,0,0,0},{1,1,1,1,2,2,2,1,1,0,0,0},{1,1,1,1,2,2,1,2,1,0,0,0},{1,1,1,1,2,2,1,1,2,0,0,0},{1,1,1,1,2,1,2,2,1,0,0,0},{1,1,1,1,2,1,2,1,2,0,0,0},{1,1,1,1,2,1,1,2,2,0,0,0},{1,1,1,1,1,2,2,2,1,0,0,0},{1,1,1,1,1,2,2,1,2,0,0,0},{1,1,1,1,1,2,1,2,2,0,0,0},{1,1,1,1,1,1,2,2,2,0,0,0},{2,2,1,1,1,1,1,1,1,1,0,0},{2,1,2,1,1,1,1,1,1,1,0,0},{2,1,1,2,1,1,1,1,1,1,0,0},{2,1,1,1,2,1,1,1,1,1,0,0},{2,1,1,1,1,2,1,1,1,1,0,0},{2,1,1,1,1,1,2,1,1,1,0,0},{2,1,1,1,1,1,1,2,1,1,0,0},{2,1,1,1,1,1,1,1,2,1,0,0},{2,1,1,1,1,1,1,1,1,2,0,0},{1,2,2,1,1,1,1,1,1,1,0,0},{1,2,1,2,1,1,1,1,1,1,0,0},{1,2,1,1,2,1,1,1,1,1,0,0},{1,2,1,1,1,2,1,1,1,1,0,0},{1,2,1,1,1,1,2,1,1,1,0,0},{1,2,1,1,1,1,1,2,1,1,0,0},{1,2,1,1,1,1,1,1,2,1,0,0},{1,2,1,1,1,1,1,1,1,2,0,0},{1,1,2,2,1,1,1,1,1,1,0,0},{1,1,2,1,2,1,1,1,1,1,0,0},{1,1,2,1,1,2,1,1,1,1,0,0},{1,1,2,1,1,1,2,1,1,1,0,0},{1,1,2,1,1,1,1,2,1,1,0,0},{1,1,2,1,1,1,1,1,2,1,0,0},{1,1,2,1,1,1,1,1,1,2,0,0},{1,1,1,2,2,1,1,1,1,1,0,0},{1,1,1,2,1,2,1,1,1,1,0,0},{1,1,1,2,1,1,2,1,1,1,0,0},{1,1,1,2,1,1,1,2,1,1,0,0},{1,1,1,2,1,1,1,1,2,1,0,0},{1,1,1,2,1,1,1,1,1,2,0,0},{1,1,1,1,2,2,1,1,1,1,0,0},{1,1,1,1,2,1,2,1,1,1,0,0},{1,1,1,1,2,1,1,2,1,1,0,0},{1,1,1,1,2,1,1,1,2,1,0,0},{1,1,1,1,2,1,1,1,1,2,0,0},{1,1,1,1,1,2,2,1,1,1,0,0},{1,1,1,1,1,2,1,2,1,1,0,0},{1,1,1,1,1,2,1,1,2,1,0,0},{1,1,1,1,1,2,1,1,1,2,0,0},{1,1,1,1,1,1,2,2,1,1,0,0},{1,1,1,1,1,1,2,1,2,1,0,0},{1,1,1,1,1,1,2,1,1,2,0,0},{1,1,1,1,1,1,1,2,2,1,0,0},{1,1,1,1,1,1,1,2,1,2,0,0},{1,1,1,1,1,1,1,1,2,2,0,0},{2,1,1,1,1,1,1,1,1,1,1,0},{1,2,1,1,1,1,1,1,1,1,1,0},{1,1,2,1,1,1,1,1,1,1,1,0},{1,1,1,2,1,1,1,1,1,1,1,0},{1,1,1,1,2,1,1,1,1,1,1,0},{1,1,1,1,1,2,1,1,1,1,1,0},{1,1,1,1,1,1,2,1,1,1,1,0},{1,1,1,1,1,1,1,2,1,1,1,0},{1,1,1,1,1,1,1,1,2,1,1,0},{1,1,1,1,1,1,1,1,1,2,1,0},{1,1,1,1,1,1,1,1,1,1,2,0},{1,1,1,1,1,1,1,1,1,1,1,1}
};

#define TWO_DECORATIONS_H
#endif
