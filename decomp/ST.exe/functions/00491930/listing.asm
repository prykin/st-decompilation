FUN_00491930:
00491930  8B 81 F7 06 00 00         MOV EAX,dword ptr [ECX + 0x6f7]
00491936  83 F8 07                  CMP EAX,0x7
00491939  74 2C                     JZ 0x00491967
0049193B  83 F8 13                  CMP EAX,0x13
0049193E  74 27                     JZ 0x00491967
00491940  83 F8 1B                  CMP EAX,0x1b
00491943  74 22                     JZ 0x00491967
00491945  83 F8 09                  CMP EAX,0x9
00491948  74 1D                     JZ 0x00491967
0049194A  83 F8 15                  CMP EAX,0x15
0049194D  74 18                     JZ 0x00491967
0049194F  83 B9 5D 04 00 00 14      CMP dword ptr [ECX + 0x45d],0x14
00491956  75 09                     JNZ 0x00491961
00491958  83 B9 C0 05 00 00 03      CMP dword ptr [ECX + 0x5c0],0x3
0049195F  74 06                     JZ 0x00491967
LAB_00491961:
00491961  B8 01 00 00 00            MOV EAX,0x1
00491966  C3                        RET
LAB_00491967:
00491967  33 C0                     XOR EAX,EAX
00491969  C3                        RET
