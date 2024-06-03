#!/bin/bash
cd ../

docker rmi -f my_c_project
docker build -t my_c_project -f Docker/Dockerfile .
docker run -p 8000:8000 --rm -it my_c_project
