FUN_006d61e0:
006D61E0  55                        PUSH EBP
006D61E1  8B EC                     MOV EBP,ESP
006D61E3  56                        PUSH ESI
006D61E4  57                        PUSH EDI
006D61E5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D61E8  8B 77 18                  MOV ESI,dword ptr [EDI + 0x18]
006D61EB  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
006D61EE  4A                        DEC EDX
006D61EF  8B C2                     MOV EAX,EDX
006D61F1  89 56 68                  MOV dword ptr [ESI + 0x68],EDX
006D61F4  85 C0                     TEST EAX,EAX
006D61F6  7F 47                     JG 0x006d623f
006D61F8  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
006D61FB  85 C0                     TEST EAX,EAX
006D61FD  74 40                     JZ 0x006d623f
006D61FF  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
006D6202  6A 00                     PUSH 0x0
006D6204  50                        PUSH EAX
006D6205  8B 08                     MOV ECX,dword ptr [EAX]
006D6207  FF 91 80 00 00 00         CALL dword ptr [ECX + 0x80]
006D620D  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
006D6210  8B 88 10 03 00 00         MOV ECX,dword ptr [EAX + 0x310]
006D6216  85 C9                     TEST ECX,ECX
006D6218  74 1E                     JZ 0x006d6238
006D621A  8B 90 88 02 00 00         MOV EDX,dword ptr [EAX + 0x288]
006D6220  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006D6223  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006D622A  74 0C                     JZ 0x006d6238
006D622C  05 F0 04 00 00            ADD EAX,0x4f0
006D6231  50                        PUSH EAX
006D6232  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006d6238:
006D6238  C7 46 6C 00 00 00 00      MOV dword ptr [ESI + 0x6c],0x0
LAB_006d623f:
006D623F  57                        PUSH EDI
006D6240  E8 03 29 07 00            CALL 0x00748b48
006D6245  5F                        POP EDI
006D6246  A3 FC 68 85 00            MOV [0x008568fc],EAX
006D624B  5E                        POP ESI
006D624C  5D                        POP EBP
006D624D  C2 04 00                  RET 0x4
