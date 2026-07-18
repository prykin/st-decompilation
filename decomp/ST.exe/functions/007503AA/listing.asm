FUN_007503aa:
007503AA  55                        PUSH EBP
007503AB  8B EC                     MOV EBP,ESP
007503AD  51                        PUSH ECX
007503AE  53                        PUSH EBX
007503AF  8B 1D 90 BB 85 00         MOV EBX,dword ptr [0x0085bb90]
007503B5  56                        PUSH ESI
007503B6  8B F1                     MOV ESI,ECX
007503B8  57                        PUSH EDI
007503B9  8D 46 08                  LEA EAX,[ESI + 0x8]
007503BC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_007503bf:
007503BF  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
007503C2  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
007503C8  33 FF                     XOR EDI,EDI
007503CA  39 7E 28                  CMP dword ptr [ESI + 0x28],EDI
007503CD  7E 0D                     JLE 0x007503dc
007503CF  FF 76 20                  PUSH dword ptr [ESI + 0x20]
007503D2  8D 4E 20                  LEA ECX,[ESI + 0x20]
007503D5  E8 FD DA FF FF            CALL 0x0074ded7
007503DA  8B F8                     MOV EDI,EAX
LAB_007503dc:
007503DC  83 7E 64 00               CMP dword ptr [ESI + 0x64],0x0
007503E0  74 2F                     JZ 0x00750411
007503E2  83 7E 40 00               CMP dword ptr [ESI + 0x40],0x0
007503E6  7E 29                     JLE 0x00750411
007503E8  FF 76 38                  PUSH dword ptr [ESI + 0x38]
007503EB  8D 4E 38                  LEA ECX,[ESI + 0x38]
007503EE  E8 E4 DA FF FF            CALL 0x0074ded7
007503F3  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
007503F6  8B 4E 6C                  MOV ECX,dword ptr [ESI + 0x6c]
007503F9  03 50 18                  ADD EDX,dword ptr [EAX + 0x18]
007503FC  13 48 1C                  ADC ECX,dword ptr [EAX + 0x1c]
007503FF  85 FF                     TEST EDI,EDI
00750401  74 0C                     JZ 0x0075040f
00750403  3B 4F 1C                  CMP ECX,dword ptr [EDI + 0x1c]
00750406  7F 09                     JG 0x00750411
00750408  7C 05                     JL 0x0075040f
0075040A  3B 57 18                  CMP EDX,dword ptr [EDI + 0x18]
0075040D  73 02                     JNC 0x00750411
LAB_0075040f:
0075040F  8B F8                     MOV EDI,EAX
LAB_00750411:
00750411  85 FF                     TEST EDI,EDI
00750413  74 16                     JZ 0x0075042b
00750415  FF 77 30                  PUSH dword ptr [EDI + 0x30]
00750418  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0075041B  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
0075041E  51                        PUSH ECX
0075041F  50                        PUSH EAX
00750420  8B CE                     MOV ECX,ESI
00750422  E8 7D FA FF FF            CALL 0x0074fea4
00750427  85 C0                     TEST EAX,EAX
00750429  75 1A                     JNZ 0x00750445
LAB_0075042b:
0075042B  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
0075042E  FF D3                     CALL EBX
00750430  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
00750433  FF 76 50                  PUSH dword ptr [ESI + 0x50]
00750436  FF 15 E0 BC 85 00         CALL dword ptr [0x0085bce0]
0075043C  85 C0                     TEST EAX,EAX
0075043E  75 1D                     JNZ 0x0075045d
00750440  E9 7A FF FF FF            JMP 0x007503bf
LAB_00750445:
00750445  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
00750448  8D 47 0C                  LEA EAX,[EDI + 0xc]
0075044B  50                        PUSH EAX
0075044C  FF 51 04                  CALL dword ptr [ECX + 0x4]
0075044F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00750452  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
00750455  89 38                     MOV dword ptr [EAX],EDI
00750457  FF D3                     CALL EBX
00750459  33 C0                     XOR EAX,EAX
0075045B  EB 05                     JMP 0x00750462
LAB_0075045d:
0075045D  B8 04 40 00 80            MOV EAX,0x80004004
LAB_00750462:
00750462  5F                        POP EDI
00750463  5E                        POP ESI
00750464  5B                        POP EBX
00750465  C9                        LEAVE
00750466  C2 08 00                  RET 0x8
