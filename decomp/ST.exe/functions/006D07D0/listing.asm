FUN_006d07d0:
006D07D0  55                        PUSH EBP
006D07D1  8B EC                     MOV EBP,ESP
006D07D3  53                        PUSH EBX
006D07D4  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006D07D7  8A CB                     MOV CL,BL
006D07D9  8B C3                     MOV EAX,EBX
006D07DB  C0 E1 03                  SHL CL,0x3
006D07DE  33 D2                     XOR EDX,EDX
006D07E0  C1 F8 03                  SAR EAX,0x3
006D07E3  8A F1                     MOV DH,CL
006D07E5  25 FC 00 00 00            AND EAX,0xfc
006D07EA  8B CB                     MOV ECX,EBX
006D07EC  0B C2                     OR EAX,EDX
006D07EE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D07F1  C1 F9 08                  SAR ECX,0x8
006D07F4  C1 E0 08                  SHL EAX,0x8
006D07F7  81 E1 F8 00 00 00         AND ECX,0xf8
006D07FD  0B C1                     OR EAX,ECX
006D07FF  50                        PUSH EAX
006D0800  52                        PUSH EDX
006D0801  FF 15 A8 BA 85 00         CALL dword ptr [0x0085baa8]
006D0807  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D080A  88 04 19                  MOV byte ptr [ECX + EBX*0x1],AL
006D080D  5B                        POP EBX
006D080E  5D                        POP EBP
006D080F  C2 0C 00                  RET 0xc
