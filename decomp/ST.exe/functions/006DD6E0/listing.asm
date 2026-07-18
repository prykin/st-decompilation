FUN_006dd6e0:
006DD6E0  55                        PUSH EBP
006DD6E1  8B EC                     MOV EBP,ESP
006DD6E3  DD 45 08                  FLD double ptr [EBP + 0x8]
006DD6E6  DC 5D 10                  FCOMP double ptr [EBP + 0x10]
006DD6E9  56                        PUSH ESI
006DD6EA  8B F1                     MOV ESI,ECX
006DD6EC  DF E0                     FNSTSW AX
006DD6EE  F6 C4 01                  TEST AH,0x1
006DD6F1  74 73                     JZ 0x006dd766
006DD6F3  DD 45 18                  FLD double ptr [EBP + 0x18]
006DD6F6  DC 5D 20                  FCOMP double ptr [EBP + 0x20]
006DD6F9  DF E0                     FNSTSW AX
006DD6FB  F6 C4 01                  TEST AH,0x1
006DD6FE  74 66                     JZ 0x006dd766
006DD700  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006DD703  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006DD706  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006DD709  89 46 60                  MOV dword ptr [ESI + 0x60],EAX
006DD70C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006DD70F  89 4E 64                  MOV dword ptr [ESI + 0x64],ECX
006DD712  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DD715  89 56 68                  MOV dword ptr [ESI + 0x68],EDX
006DD718  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006DD71B  89 46 6C                  MOV dword ptr [ESI + 0x6c],EAX
006DD71E  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006DD721  89 4E 70                  MOV dword ptr [ESI + 0x70],ECX
006DD724  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006DD727  89 56 74                  MOV dword ptr [ESI + 0x74],EDX
006DD72A  8B 96 94 00 00 00         MOV EDX,dword ptr [ESI + 0x94]
006DD730  89 46 78                  MOV dword ptr [ESI + 0x78],EAX
006DD733  8B 86 90 00 00 00         MOV EAX,dword ptr [ESI + 0x90]
006DD739  89 4E 7C                  MOV dword ptr [ESI + 0x7c],ECX
006DD73C  8B 8E 8C 00 00 00         MOV ECX,dword ptr [ESI + 0x8c]
006DD742  52                        PUSH EDX
006DD743  8B 96 88 00 00 00         MOV EDX,dword ptr [ESI + 0x88]
006DD749  50                        PUSH EAX
006DD74A  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
006DD750  51                        PUSH ECX
006DD751  52                        PUSH EDX
006DD752  50                        PUSH EAX
006DD753  8B CE                     MOV ECX,ESI
006DD755  E8 F6 F8 FF FF            CALL 0x006dd050
006DD75A  8B CE                     MOV ECX,ESI
006DD75C  E8 FF F5 FF FF            CALL 0x006dcd60
006DD761  5E                        POP ESI
006DD762  5D                        POP EBP
006DD763  C2 20 00                  RET 0x20
LAB_006dd766:
006DD766  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006DD76C  68 E4 03 00 00            PUSH 0x3e4
006DD771  68 58 E7 7E 00            PUSH 0x7ee758
006DD776  51                        PUSH ECX
006DD777  6A CC                     PUSH -0x34
006DD779  E8 C2 86 FC FF            CALL 0x006a5e40
006DD77E  5E                        POP ESI
006DD77F  5D                        POP EBP
006DD780  C2 20 00                  RET 0x20
