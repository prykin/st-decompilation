FUN_004977c0:
004977C0  55                        PUSH EBP
004977C1  8B EC                     MOV EBP,ESP
004977C3  51                        PUSH ECX
004977C4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004977C7  56                        PUSH ESI
004977C8  33 F6                     XOR ESI,ESI
004977CA  85 C0                     TEST EAX,EAX
004977CC  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004977CF  7E 4B                     JLE 0x0049781c
004977D1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004977D4  53                        PUSH EBX
004977D5  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004977D8  57                        PUSH EDI
LAB_004977d9:
004977D9  8B 02                     MOV EAX,dword ptr [EDX]
004977DB  85 F6                     TEST ESI,ESI
004977DD  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004977E0  8B 7C C3 10               MOV EDI,dword ptr [EBX + EAX*0x8 + 0x10]
004977E4  7E 26                     JLE 0x0049780c
004977E6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004977E9  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
LAB_004977ec:
004977EC  8B 01                     MOV EAX,dword ptr [ECX]
004977EE  8D 34 40                  LEA ESI,[EAX + EAX*0x2]
004977F1  3B 7C F3 10               CMP EDI,dword ptr [EBX + ESI*0x8 + 0x10]
004977F5  7D 06                     JGE 0x004977fd
004977F7  8B 32                     MOV ESI,dword ptr [EDX]
004977F9  89 31                     MOV dword ptr [ECX],ESI
004977FB  89 02                     MOV dword ptr [EDX],EAX
LAB_004977fd:
004977FD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00497800  83 C1 04                  ADD ECX,0x4
00497803  48                        DEC EAX
00497804  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00497807  75 E3                     JNZ 0x004977ec
00497809  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_0049780c:
0049780C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0049780F  46                        INC ESI
00497810  83 C2 04                  ADD EDX,0x4
00497813  3B F0                     CMP ESI,EAX
00497815  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00497818  7C BF                     JL 0x004977d9
0049781A  5F                        POP EDI
0049781B  5B                        POP EBX
LAB_0049781c:
0049781C  5E                        POP ESI
0049781D  8B E5                     MOV ESP,EBP
0049781F  5D                        POP EBP
00497820  C2 0C 00                  RET 0xc
