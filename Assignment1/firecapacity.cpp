#include <iostream>
using namespace std;

int main(int argc, char **argv){
  //intialize variables for user input
  int maximumRoomCapacity = 0;
  int meetingAttendance = 0;

  //take in maximum room capacity
  cout << "enter the maximum capacity of the room: ";
  cin >> maximumRoomCapacity;

  //take in number of people attending the meeting
  cout << "enter the number of people attending the meeting: ";
  cin >> meetingAttendance;

  //if the capacity is greater than attendance, announce that it is legal to
  //hold the meeting, and state how many more people can fit
  if(meetingAttendance <= maximumRoomCapacity){
    cout << "it is legal to hold the meeting. ";
    cout << maximumRoomCapacity - meetingAttendance;
    cout << " more people can attend the meeting before hitting max capacity." << endl;
  }
  //otherwise, state that holding so many people is illegal and state how
  //many people must leave.
  else{
    cout << "the meeting cannot be held as planned due to fire regulations. ";
    cout << meetingAttendance - maximumRoomCapacity;
    cout << " people must be excluded in order to meet fire regulations." << endl;
  }

  return 0;
}
