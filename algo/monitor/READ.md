# Guide

## performance monitor

* time -p python cal.py
* python -m cProfile -s cumulative cal.py [recommacnd]
* python-lib:
    * line_profiler ：按行分析代码CPU占用
        * pip install line_profiler 
        * @profile //包装器模式|| 注解
        * kernprof -l -v cal.py
    * memory_profiler :按行测量Memory占用 -> 海量数据
        * memory_profiler | psutil
        * python -m memory_profiler cal.py
    * guppy : 测量堆栈对象分配
        * from guppy import hpy
        * hp = hpy()
        * hp.heap()
    * 自定义装饰器 