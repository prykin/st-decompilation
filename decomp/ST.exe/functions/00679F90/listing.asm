FUN_00679f90:
00679F90  55                        PUSH EBP
00679F91  8B EC                     MOV EBP,ESP
00679F93  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00679F96  50                        PUSH EAX
00679F97  E8 14 7F D8 FF            CALL 0x00401eb0
00679F9C  8B C8                     MOV ECX,EAX
00679F9E  85 C9                     TEST ECX,ECX
00679FA0  74 23                     JZ 0x00679fc5
00679FA2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00679FA5  85 C0                     TEST EAX,EAX
00679FA7  74 1C                     JZ 0x00679fc5
00679FA9  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00679FAC  85 D2                     TEST EDX,EDX
00679FAE  7D 0A                     JGE 0x00679fba
00679FB0  50                        PUSH EAX
00679FB1  E8 2B 71 D8 FF            CALL 0x004010e1
00679FB6  5D                        POP EBP
00679FB7  C2 0C 00                  RET 0xc
LAB_00679fba:
00679FBA  52                        PUSH EDX
00679FBB  50                        PUSH EAX
00679FBC  E8 81 9C D8 FF            CALL 0x00403c42
00679FC1  5D                        POP EBP
00679FC2  C2 0C 00                  RET 0xc
LAB_00679fc5:
00679FC5  B8 CC FF FF FF            MOV EAX,0xffffffcc
00679FCA  5D                        POP EBP
00679FCB  C2 0C 00                  RET 0xc
