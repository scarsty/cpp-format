
abc = 
{
    {1,2},
    {3,4},
};

#define WAIT_UNTIL(condition) {{i=0;} }
#define WAIT_UNTIL_OVERTIME(condition, overtime) \
        { \
   {} }
{
    auto zoomOneDefect = []()
    {
    };}
    int a=int{0};
        void setLearnRateBase(real lrb)
                      {
        for (auto& n : nets_)        {            n->setLearnRateBase(lrb);
        }
    }

    //4阶张量形式
Matrix::Matrix(int w, int h, int c, int n, MatrixDataType data_type, DeviceType device_type) : Matrix({ w, h, c, n }, data_type, device_type)
{
}
void zoomResult()
{
    std::function<void(DefectRect&)> zoomOneDefect = [&](DefectRect& r)
{};}
auto c=[](int& i)->int
{
};

#define dfdfdas auto c=[](int& i)->int\
{\
};

#define dfdfdas           \
auto c=[](int& i)->int\
{\
};

void zoomResult()
{
    std::function<void(Rect& r)> zoomOne = [&](Rect& r)    //todo: clang-format not right
    {
        r.x /= zoom_;
        r.y /= zoom_;
        r.width /= zoom_;
        r.height /= zoom_;
        if (r.segmentation.cols > 0 && r.segmentation.rows > 0)
        {
            cv::resize(r.segmentation, r.segmentation, cv::Size(r.width, r.height), 0, 0, CV_INTER_NN);
        }
        for (auto& rs : r.sub_defects)
        {
            zoomOneDefect(rs);
        }
    };
}
