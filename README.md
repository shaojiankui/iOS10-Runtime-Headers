# iOS10-Runtime-Headers
 iOS 10 Runtime Headers 

##导出方法
1.克隆RuntimeBrowser 并且运行到iOS版本到真机上 https://github.com/nst/RuntimeBrowser/

2.iOS OCRuntime App中 > Frameworks 页签 > Load All

3.在应用的About中会显示 一个IP地址(GCDWebServer的IP),在相同网段的Mac上浏览器输入即可各种frameworks的API

4.终端使用 wget -r http://192.168.1.102:10000/tree/ 即可下载到本地
因为文件较多,偶尔会造成app闪退,为了下全每个文件夹一个重试次数50次
wget -r -t50 http://192.168.1.102:10000/tree/

5.等待所有文件下载完毕即可
FINISHED --2016-06-14 20:22:32--
Total wall clock time: 27m 54s
Downloaded: 42401 files, 444M in 3m 18s (2.24 MB/s)
Jakey-Pro:iOS10-Runtime-Headers jakey$ 

##安装wget
wget使用brew install wget 即可安装使用

