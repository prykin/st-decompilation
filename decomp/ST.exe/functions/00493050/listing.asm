FUN_00493050:
00493050  55                        PUSH EBP
00493051  8B EC                     MOV EBP,ESP
00493053  83 B9 5D 04 00 00 03      CMP dword ptr [ECX + 0x45d],0x3
0049305A  75 7C                     JNZ 0x004930d8
0049305C  8B 81 2E 08 00 00         MOV EAX,dword ptr [ECX + 0x82e]
00493062  83 F8 FF                  CMP EAX,-0x1
00493065  74 04                     JZ 0x0049306b
00493067  85 C0                     TEST EAX,EAX
00493069  75 6D                     JNZ 0x004930d8
LAB_0049306b:
0049306B  8B 81 F7 06 00 00         MOV EAX,dword ptr [ECX + 0x6f7]
00493071  83 F8 07                  CMP EAX,0x7
00493074  74 25                     JZ 0x0049309b
00493076  83 F8 13                  CMP EAX,0x13
00493079  74 20                     JZ 0x0049309b
0049307B  83 F8 1B                  CMP EAX,0x1b
0049307E  74 1B                     JZ 0x0049309b
00493080  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00493083  83 F8 07                  CMP EAX,0x7
00493086  74 0A                     JZ 0x00493092
00493088  83 F8 13                  CMP EAX,0x13
0049308B  74 05                     JZ 0x00493092
0049308D  83 F8 1B                  CMP EAX,0x1b
00493090  75 46                     JNZ 0x004930d8
LAB_00493092:
00493092  B8 01 00 00 00            MOV EAX,0x1
00493097  5D                        POP EBP
00493098  C2 04 00                  RET 0x4
LAB_0049309b:
0049309B  8B 81 CA 07 00 00         MOV EAX,dword ptr [ECX + 0x7ca]
004930A1  85 C0                     TEST EAX,EAX
004930A3  75 33                     JNZ 0x004930d8
004930A5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004930A8  3D FD 00 00 00            CMP EAX,0xfd
004930AD  74 E3                     JZ 0x00493092
004930AF  3D FE 00 00 00            CMP EAX,0xfe
004930B4  74 DC                     JZ 0x00493092
004930B6  83 F8 01                  CMP EAX,0x1
004930B9  7C 1D                     JL 0x004930d8
004930BB  83 F8 28                  CMP EAX,0x28
004930BE  7F 18                     JG 0x004930d8
004930C0  83 F8 07                  CMP EAX,0x7
004930C3  74 13                     JZ 0x004930d8
004930C5  83 F8 13                  CMP EAX,0x13
004930C8  74 0E                     JZ 0x004930d8
004930CA  83 F8 1B                  CMP EAX,0x1b
004930CD  74 09                     JZ 0x004930d8
004930CF  B8 01 00 00 00            MOV EAX,0x1
004930D4  5D                        POP EBP
004930D5  C2 04 00                  RET 0x4
LAB_004930d8:
004930D8  33 C0                     XOR EAX,EAX
004930DA  5D                        POP EBP
004930DB  C2 04 00                  RET 0x4
