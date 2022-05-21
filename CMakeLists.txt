cmake_minimum_required(VERSION 3.21)
project(SDToySocialNetwork)

set(CMAKE_CXX_STANDARD 14)

add_executable(SDToySocialNetwork main.cpp Domain/List.h Tests/TestAll.cpp Headers/TestAll.h Tests/TestList.cpp Headers/TestList.h Domain/Node.h Tests/TestNode.cpp Headers/TestNode.h Domain/BinarySearchTree.h Tests/TestBinarySearchTree.cpp Headers/TestBinarySearchTree.h Domain/Set.h Tests/TestSet.cpp Headers/TestSet.h Domain/User.cpp Headers/User.h Tests/TestUser.cpp Headers/TestUser.h Domain/Friendship.cpp Headers/Friendship.h Tests/TestFriendship.cpp Headers/TestFriendship.h Tests/TestFriendship.cpp Headers/TestFriendship.h Domain/Message.cpp Headers/Message.h Tests/testMessage.cpp Tests/TestMessage.cpp Headers/TestMessage.h Domain/Event.cpp Headers/Event.h Tests/TestEvent.cpp Headers/TestEvent.h Domain/Iterator.h Tests/TestIterator.cpp Headers/TestIterator.h Repository/Repository.h)
