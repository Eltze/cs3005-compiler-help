CXX = g++
CXXFLAGS = -g -Wall -std=c++11 -Wpedantic -Wextra -Werror

ALL_THE_OS = controllers.o user_io.o image_output.o image_drawing.o Image.o PPM.o

Uneeded = inquisitor.o

THE_DOT_HS = Image.h PPM.h image_menu.h MenuData.h ActionData.h

all: hello questions_3 ascii_image image_file ActionData inquisitor buck flag_colombia_ascii

%.o: %.cpp
	$(CXX) -g -Wall -std=c++11 -Wpedantic -Wextra -Werror

hello: hello.o 
	$(CXX) -o hello hello.o

questions_3: questions_3.o 
	$(CXX) $(CXXFLAGS) -o questions_3 questions_3.o

ascii_image: ascii_image.o $(ALL_THE_OS) $(THE_DOT_HS)
	$(CXX) $(CXXFLAGS) -o ascii_image ascii_image.o $(ALL_THE_OS)

image_file: image_file.o $(ALL_THE_OS) $(THE_DOT_HS)
	$(CXX) $(CXXFLAGS) -o image_file image_file.o $(ALL_THE_OS)

ActionData: ActionData.o $(ALL_THE_OS) $(THE_DOT_HS)
	$(CXX) $(CXXFLAGS) -o ActionData ActionData.o $(ALL_THE_OS)

inquisitor: inquisitor.o $(All_The_Os)
	$(CXX) $(CXXFLAGS) -o inquisitor inquisitor.o $(All_The_Os)

buck: buck.o $(All_The_Os)
	$(CXX) $(CXXFLAGS) -o buck buck.o $(All_The_Os)

flag_colombia_ascii: flag_colombia_ascii.o $(All_The_Os)
	$(CXX) $(CXXFLAGS) -o flag_colombia_ascii flag_colombia_ascii.o $(All_The_Os)

hello.o: hello.cpp
	$(CXX) $(CXXFLAGS) -c hello.o hello.cpp

questions_3.o: questions_3.cpp 
	$(CXX) $(CXXFLAGS) -c questions_3.o questions_3.cpp 

ascii_image.o: ascii_image.cpp 
	$(CXX) $(CXXFLAGS) -c ascii_image.o ascii_image.cpp 

image_file.o: image_file.cpp
	$(CXX) $(CXXFLAGS) -c image_file.o image_file.cpp

ActionData.o: ActionData.cpp $(ALL_THE_OS) $(THE_DOT_HS)
	$(CXX) $(CXXFLAGS) -c ActionData.o ActionData.cpp $(ALL_THE_OS)

inquisitor.o: inquisitor.cpp 
	$(CXX) -c inquisitor.o inquisitor.cpp 

buck.o: buck.cpp
	$(CXX) -c buck.o buck.cpp

flag_colombia_ascii.o: flag_colombia_ascii.cpp $(All_The_Os)
	$(CXX) -c flag_colombia_ascii.o flag_colombia_ascii.cpp $(All_The_Os)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<


clean:
	rm -f *.o hello questions_3 ascii_image image_file inquisitor buck flag_colombia_ascii
