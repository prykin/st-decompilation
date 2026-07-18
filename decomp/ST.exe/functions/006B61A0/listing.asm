FUN_006b61a0:
006B61A0  55                        PUSH EBP
006B61A1  8B EC                     MOV EBP,ESP
006B61A3  56                        PUSH ESI
006B61A4  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B61A7  57                        PUSH EDI
006B61A8  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B61AB  33 D2                     XOR EDX,EDX
LAB_006b61ad:
006B61AD  8A 06                     MOV AL,byte ptr [ESI]
006B61AF  3C 41                     CMP AL,0x41
006B61B1  72 0A                     JC 0x006b61bd
006B61B3  25 FF 00 00 00            AND EAX,0xff
006B61B8  83 E8 37                  SUB EAX,0x37
006B61BB  EB 08                     JMP 0x006b61c5
LAB_006b61bd:
006B61BD  25 FF 00 00 00            AND EAX,0xff
006B61C2  83 E8 30                  SUB EAX,0x30
LAB_006b61c5:
006B61C5  8B C8                     MOV ECX,EAX
006B61C7  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
006B61CA  3C 41                     CMP AL,0x41
006B61CC  72 0A                     JC 0x006b61d8
006B61CE  25 FF 00 00 00            AND EAX,0xff
006B61D3  83 E8 37                  SUB EAX,0x37
006B61D6  EB 08                     JMP 0x006b61e0
LAB_006b61d8:
006B61D8  25 FF 00 00 00            AND EAX,0xff
006B61DD  83 E8 30                  SUB EAX,0x30
LAB_006b61e0:
006B61E0  85 C9                     TEST ECX,ECX
006B61E2  7C 25                     JL 0x006b6209
006B61E4  83 F9 0F                  CMP ECX,0xf
006B61E7  7F 20                     JG 0x006b6209
006B61E9  85 C0                     TEST EAX,EAX
006B61EB  7C 1C                     JL 0x006b6209
006B61ED  83 F8 0F                  CMP EAX,0xf
006B61F0  7F 17                     JG 0x006b6209
006B61F2  C0 E1 04                  SHL CL,0x4
006B61F5  0A C8                     OR CL,AL
006B61F7  83 C6 02                  ADD ESI,0x2
006B61FA  88 0C 3A                  MOV byte ptr [EDX + EDI*0x1],CL
006B61FD  42                        INC EDX
006B61FE  83 FA 10                  CMP EDX,0x10
006B6201  7C AA                     JL 0x006b61ad
006B6203  5F                        POP EDI
006B6204  5E                        POP ESI
006B6205  5D                        POP EBP
006B6206  C2 08 00                  RET 0x8
LAB_006b6209:
006B6209  83 FA 10                  CMP EDX,0x10
006B620C  7D 0D                     JGE 0x006b621b
006B620E  33 C0                     XOR EAX,EAX
006B6210  89 07                     MOV dword ptr [EDI],EAX
006B6212  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
006B6215  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
006B6218  89 47 0C                  MOV dword ptr [EDI + 0xc],EAX
LAB_006b621b:
006B621B  5F                        POP EDI
006B621C  5E                        POP ESI
006B621D  5D                        POP EBP
006B621E  C2 08 00                  RET 0x8
