FUN_00747c63:
00747C63  53                        PUSH EBX
00747C64  56                        PUSH ESI
00747C65  57                        PUSH EDI
00747C66  33 FF                     XOR EDI,EDI
00747C68  39 7C 24 14               CMP dword ptr [ESP + 0x14],EDI
00747C6C  75 07                     JNZ 0x00747c75
00747C6E  B8 03 40 00 80            MOV EAX,0x80004003
00747C73  EB 6A                     JMP 0x00747cdf
LAB_00747c75:
00747C75  8B 74 24 10               MOV ESI,dword ptr [ESP + 0x10]
00747C79  8B 5E 5C                  MOV EBX,dword ptr [ESI + 0x5c]
00747C7C  53                        PUSH EBX
00747C7D  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
00747C83  39 7E 0C                  CMP dword ptr [ESI + 0xc],EDI
00747C86  74 0E                     JZ 0x00747c96
00747C88  53                        PUSH EBX
00747C89  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00747C8F  B8 04 02 04 80            MOV EAX,0x80040204
00747C94  EB 49                     JMP 0x00747cdf
LAB_00747c96:
00747C96  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
00747C99  39 78 14                  CMP dword ptr [EAX + 0x14],EDI
00747C9C  74 0E                     JZ 0x00747cac
00747C9E  53                        PUSH EBX
00747C9F  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00747CA5  B8 24 02 04 80            MOV EAX,0x80040224
00747CAA  EB 33                     JMP 0x00747cdf
LAB_00747cac:
00747CAC  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
00747CB0  83 C6 F4                  ADD ESI,-0xc
00747CB3  8B CE                     MOV ECX,ESI
00747CB5  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
00747CB9  E8 A7 01 00 00            CALL 0x00747e65
00747CBE  8B F8                     MOV EDI,EAX
00747CC0  85 FF                     TEST EDI,EDI
00747CC2  7D 12                     JGE 0x00747cd6
00747CC4  8B 06                     MOV EAX,dword ptr [ESI]
00747CC6  8B CE                     MOV ECX,ESI
00747CC8  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00747CCB  53                        PUSH EBX
00747CCC  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00747CD2  8B C7                     MOV EAX,EDI
00747CD4  EB 09                     JMP 0x00747cdf
LAB_00747cd6:
00747CD6  53                        PUSH EBX
00747CD7  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00747CDD  33 C0                     XOR EAX,EAX
LAB_00747cdf:
00747CDF  5F                        POP EDI
00747CE0  5E                        POP ESI
00747CE1  5B                        POP EBX
00747CE2  C2 0C 00                  RET 0xc
