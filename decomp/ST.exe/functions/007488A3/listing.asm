FUN_007488a3:
007488A3  55                        PUSH EBP
007488A4  8B EC                     MOV EBP,ESP
007488A6  83 EC 10                  SUB ESP,0x10
007488A9  53                        PUSH EBX
007488AA  56                        PUSH ESI
007488AB  57                        PUSH EDI
007488AC  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007488AF  8B 4F D8                  MOV ECX,dword ptr [EDI + -0x28]
007488B2  8B 01                     MOV EAX,dword ptr [ECX]
007488B4  FF 50 18                  CALL dword ptr [EAX + 0x18]
007488B7  33 DB                     XOR EBX,EBX
007488B9  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
007488BC  3B C3                     CMP EAX,EBX
007488BE  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
007488C1  7E 70                     JLE 0x00748933
LAB_007488c3:
007488C3  8B 4F D8                  MOV ECX,dword ptr [EDI + -0x28]
007488C6  53                        PUSH EBX
007488C7  8B 01                     MOV EAX,dword ptr [ECX]
007488C9  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
007488CC  8D 70 0C                  LEA ESI,[EAX + 0xc]
007488CF  8D 4D F4                  LEA ECX,[EBP + -0xc]
007488D2  51                        PUSH ECX
007488D3  56                        PUSH ESI
007488D4  8B 06                     MOV EAX,dword ptr [ESI]
007488D6  FF 50 24                  CALL dword ptr [EAX + 0x24]
007488D9  85 C0                     TEST EAX,EAX
007488DB  7C 5E                     JL 0x0074893b
007488DD  83 7D F4 01               CMP dword ptr [EBP + -0xc],0x1
007488E1  75 4A                     JNZ 0x0074892d
007488E3  8B 06                     MOV EAX,dword ptr [ESI]
007488E5  8D 4D FC                  LEA ECX,[EBP + -0x4]
007488E8  51                        PUSH ECX
007488E9  56                        PUSH ESI
007488EA  FF 50 18                  CALL dword ptr [EAX + 0x18]
007488ED  85 C0                     TEST EAX,EAX
007488EF  7C 3C                     JL 0x0074892d
007488F1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007488F4  FF 45 08                  INC dword ptr [EBP + 0x8]
007488F7  8D 55 F8                  LEA EDX,[EBP + -0x8]
007488FA  8B 08                     MOV ECX,dword ptr [EAX]
007488FC  52                        PUSH EDX
007488FD  68 60 1B 7A 00            PUSH 0x7a1b60
00748902  50                        PUSH EAX
00748903  FF 11                     CALL dword ptr [ECX]
00748905  8B F0                     MOV ESI,EAX
00748907  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074890A  50                        PUSH EAX
0074890B  8B 08                     MOV ECX,dword ptr [EAX]
0074890D  FF 51 08                  CALL dword ptr [ECX + 0x8]
00748910  85 F6                     TEST ESI,ESI
00748912  7C 2E                     JL 0x00748942
00748914  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00748917  50                        PUSH EAX
00748918  8B 08                     MOV ECX,dword ptr [EAX]
0074891A  FF 51 20                  CALL dword ptr [ECX + 0x20]
0074891D  8B F0                     MOV ESI,EAX
0074891F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00748922  50                        PUSH EAX
00748923  8B 08                     MOV ECX,dword ptr [EAX]
00748925  FF 51 08                  CALL dword ptr [ECX + 0x8]
00748928  83 FE 01                  CMP ESI,0x1
0074892B  75 15                     JNZ 0x00748942
LAB_0074892d:
0074892D  43                        INC EBX
0074892E  3B 5D F0                  CMP EBX,dword ptr [EBP + -0x10]
00748931  7C 90                     JL 0x007488c3
LAB_00748933:
00748933  33 C0                     XOR EAX,EAX
00748935  39 45 08                  CMP dword ptr [EBP + 0x8],EAX
00748938  0F 95 C0                  SETNZ AL
LAB_0074893b:
0074893B  5F                        POP EDI
0074893C  5E                        POP ESI
0074893D  5B                        POP EBX
0074893E  C9                        LEAVE
0074893F  C2 04 00                  RET 0x4
LAB_00748942:
00748942  33 C0                     XOR EAX,EAX
00748944  EB F5                     JMP 0x0074893b
