#python 程序性能分析，瓶颈发现

@profile
def cal():
    for i in range(100):
        print
    return  

if __name__ == "main":
    cal()