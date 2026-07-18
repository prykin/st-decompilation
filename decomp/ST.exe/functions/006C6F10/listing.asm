FUN_006c6f10:
006C6F10  55                        PUSH EBP
006C6F11  8B EC                     MOV EBP,ESP
006C6F13  53                        PUSH EBX
006C6F14  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006C6F17  56                        PUSH ESI
006C6F18  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C6F1B  57                        PUSH EDI
006C6F1C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_006c6f1f:
006C6F1F  8B 46 6A                  MOV EAX,dword ptr [ESI + 0x6a]
006C6F22  85 C0                     TEST EAX,EAX
006C6F24  7E 0A                     JLE 0x006c6f30
006C6F26  8B 46 6E                  MOV EAX,dword ptr [ESI + 0x6e]
006C6F29  85 C0                     TEST EAX,EAX
006C6F2B  7E 03                     JLE 0x006c6f30
006C6F2D  56                        PUSH ESI
006C6F2E  FF D7                     CALL EDI
LAB_006c6f30:
006C6F30  56                        PUSH ESI
006C6F31  E8 8A 11 01 00            CALL 0x006d80c0
006C6F36  85 C0                     TEST EAX,EAX
006C6F38  75 73                     JNZ 0x006c6fad
006C6F3A  8A 46 5E                  MOV AL,byte ptr [ESI + 0x5e]
006C6F3D  24 1C                     AND AL,0x1c
006C6F3F  3C 08                     CMP AL,0x8
006C6F41  75 1A                     JNZ 0x006c6f5d
006C6F43  8B 46 1A                  MOV EAX,dword ptr [ESI + 0x1a]
006C6F46  8B 4E 1E                  MOV ECX,dword ptr [ESI + 0x1e]
006C6F49  8B 56 22                  MOV EDX,dword ptr [ESI + 0x22]
006C6F4C  89 46 62                  MOV dword ptr [ESI + 0x62],EAX
006C6F4F  8B 46 26                  MOV EAX,dword ptr [ESI + 0x26]
006C6F52  89 4E 66                  MOV dword ptr [ESI + 0x66],ECX
006C6F55  89 56 6A                  MOV dword ptr [ESI + 0x6a],EDX
006C6F58  89 46 6E                  MOV dword ptr [ESI + 0x6e],EAX
006C6F5B  EB 28                     JMP 0x006c6f85
LAB_006c6f5d:
006C6F5D  3C 0C                     CMP AL,0xc
006C6F5F  75 1D                     JNZ 0x006c6f7e
006C6F61  8B 4E 1A                  MOV ECX,dword ptr [ESI + 0x1a]
006C6F64  8B 56 1E                  MOV EDX,dword ptr [ESI + 0x1e]
006C6F67  8B 46 22                  MOV EAX,dword ptr [ESI + 0x22]
006C6F6A  89 4E 62                  MOV dword ptr [ESI + 0x62],ECX
006C6F6D  8B 4E 26                  MOV ECX,dword ptr [ESI + 0x26]
006C6F70  56                        PUSH ESI
006C6F71  89 56 66                  MOV dword ptr [ESI + 0x66],EDX
006C6F74  89 46 6A                  MOV dword ptr [ESI + 0x6a],EAX
006C6F77  89 4E 6E                  MOV dword ptr [ESI + 0x6e],ECX
006C6F7A  FF D3                     CALL EBX
006C6F7C  EB 07                     JMP 0x006c6f85
LAB_006c6f7e:
006C6F7E  C7 46 6A FF FF FF FF      MOV dword ptr [ESI + 0x6a],0xffffffff
LAB_006c6f85:
006C6F85  56                        PUSH ESI
006C6F86  E8 0F 0E 01 00            CALL 0x006d7d9a
006C6F8B  83 C4 04                  ADD ESP,0x4
006C6F8E  85 C0                     TEST EAX,EAX
006C6F90  75 14                     JNZ 0x006c6fa6
006C6F92  8B 56 56                  MOV EDX,dword ptr [ESI + 0x56]
006C6F95  83 E2 FB                  AND EDX,0xfffffffb
006C6F98  66 39 46 5F               CMP word ptr [ESI + 0x5f],AX
006C6F9C  89 56 56                  MOV dword ptr [ESI + 0x56],EDX
006C6F9F  75 0C                     JNZ 0x006c6fad
006C6FA1  E9 79 FF FF FF            JMP 0x006c6f1f
LAB_006c6fa6:
006C6FA6  83 F8 FF                  CMP EAX,-0x1
006C6FA9  75 02                     JNZ 0x006c6fad
006C6FAB  33 C0                     XOR EAX,EAX
LAB_006c6fad:
006C6FAD  5F                        POP EDI
006C6FAE  5E                        POP ESI
006C6FAF  5B                        POP EBX
006C6FB0  5D                        POP EBP
006C6FB1  C2 0C 00                  RET 0xc
