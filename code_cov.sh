#!/bin/bash

cd /main/CMakeFiles/gtestExample1_lib.dir

for filename in `find . | egrep '\.gcno'`; 
do 
  gcov $filename; 
done

lcov --capture --directory . --output-file coverage.info

bash <(curl -s https://codecov.io/bash) -t b6718535-f583-4001-b742-d67ea7a33535 || echo "Codecov did not collect coverage reports"

