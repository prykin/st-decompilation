STPlaySystemC::SaveObjData:
0054D550  55                        PUSH EBP
0054D551  8B EC                     MOV EBP,ESP
0054D553  83 EC 48                  SUB ESP,0x48
0054D556  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
0054D559  56                        PUSH ESI
0054D55A  85 C0                     TEST EAX,EAX
0054D55C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0054D55F  75 0C                     JNZ 0x0054d56d
0054D561  B8 FC FF FF FF            MOV EAX,0xfffffffc
0054D566  5E                        POP ESI
0054D567  8B E5                     MOV ESP,EBP
0054D569  5D                        POP EBP
0054D56A  C2 10 00                  RET 0x10
LAB_0054d56d:
0054D56D  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054D572  8D 55 BC                  LEA EDX,[EBP + -0x44]
0054D575  8D 4D B8                  LEA ECX,[EBP + -0x48]
0054D578  6A 00                     PUSH 0x0
0054D57A  52                        PUSH EDX
0054D57B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0054D57E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054D584  E8 67 02 1E 00            CALL 0x0072d7f0
0054D589  8B F0                     MOV ESI,EAX
0054D58B  83 C4 08                  ADD ESP,0x8
0054D58E  85 F6                     TEST ESI,ESI
0054D590  75 31                     JNZ 0x0054d5c3
0054D592  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0054D595  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0054D598  50                        PUSH EAX
0054D599  6A 02                     PUSH 0x2
0054D59B  50                        PUSH EAX
0054D59C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0054D59F  50                        PUSH EAX
0054D5A0  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0054D5A3  51                        PUSH ECX
0054D5A4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0054D5A7  52                        PUSH EDX
0054D5A8  50                        PUSH EAX
0054D5A9  8B 49 24                  MOV ECX,dword ptr [ECX + 0x24]
0054D5AC  E8 3F 3E 1A 00            CALL 0x006f13f0
0054D5B1  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0054D5B4  33 C0                     XOR EAX,EAX
0054D5B6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054D5BC  5E                        POP ESI
0054D5BD  8B E5                     MOV ESP,EBP
0054D5BF  5D                        POP EBP
0054D5C0  C2 10 00                  RET 0x10
LAB_0054d5c3:
0054D5C3  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0054D5C6  68 10 85 7C 00            PUSH 0x7c8510
0054D5CB  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054D5D0  56                        PUSH ESI
0054D5D1  6A 00                     PUSH 0x0
0054D5D3  68 32 02 00 00            PUSH 0x232
0054D5D8  68 30 84 7C 00            PUSH 0x7c8430
0054D5DD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054D5E2  E8 E9 FE 15 00            CALL 0x006ad4d0
0054D5E7  83 C4 18                  ADD ESP,0x18
0054D5EA  85 C0                     TEST EAX,EAX
0054D5EC  74 01                     JZ 0x0054d5ef
0054D5EE  CC                        INT3
LAB_0054d5ef:
0054D5EF  68 32 02 00 00            PUSH 0x232
0054D5F4  68 30 84 7C 00            PUSH 0x7c8430
0054D5F9  6A 00                     PUSH 0x0
0054D5FB  56                        PUSH ESI
0054D5FC  E8 3F 88 15 00            CALL 0x006a5e40
0054D601  8B C6                     MOV EAX,ESI
0054D603  5E                        POP ESI
0054D604  8B E5                     MOV ESP,EBP
0054D606  5D                        POP EBP
0054D607  C2 10 00                  RET 0x10
