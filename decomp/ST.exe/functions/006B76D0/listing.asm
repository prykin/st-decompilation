FUN_006b76d0:
006B76D0  55                        PUSH EBP
006B76D1  8B EC                     MOV EBP,ESP
006B76D3  57                        PUSH EDI
006B76D4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B76D7  85 FF                     TEST EDI,EDI
006B76D9  74 5C                     JZ 0x006b7737
006B76DB  8B 0F                     MOV ECX,dword ptr [EDI]
006B76DD  85 C9                     TEST ECX,ECX
006B76DF  74 22                     JZ 0x006b7703
006B76E1  8B 47 38                  MOV EAX,dword ptr [EDI + 0x38]
006B76E4  85 C0                     TEST EAX,EAX
006B76E6  74 13                     JZ 0x006b76fb
006B76E8  83 F8 FF                  CMP EAX,-0x1
006B76EB  74 0E                     JZ 0x006b76fb
006B76ED  8B 11                     MOV EDX,dword ptr [ECX]
006B76EF  50                        PUSH EAX
006B76F0  51                        PUSH ECX
006B76F1  FF 52 24                  CALL dword ptr [EDX + 0x24]
006B76F4  C7 47 38 FF FF FF FF      MOV dword ptr [EDI + 0x38],0xffffffff
LAB_006b76fb:
006B76FB  8B 07                     MOV EAX,dword ptr [EDI]
006B76FD  50                        PUSH EAX
006B76FE  8B 08                     MOV ECX,dword ptr [EAX]
006B7700  FF 51 10                  CALL dword ptr [ECX + 0x10]
LAB_006b7703:
006B7703  53                        PUSH EBX
006B7704  8D 5F 44                  LEA EBX,[EDI + 0x44]
006B7707  56                        PUSH ESI
006B7708  8B 33                     MOV ESI,dword ptr [EBX]
006B770A  85 F6                     TEST ESI,ESI
006B770C  74 0F                     JZ 0x006b771d
LAB_006b770e:
006B770E  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006B7711  52                        PUSH EDX
006B7712  E8 79 E7 FE FF            CALL 0x006a5e90
006B7717  8B 36                     MOV ESI,dword ptr [ESI]
006B7719  85 F6                     TEST ESI,ESI
006B771B  75 F1                     JNZ 0x006b770e
LAB_006b771d:
006B771D  53                        PUSH EBX
006B771E  E8 7D AE 01 00            CALL 0x006d25a0
006B7723  8D 47 34                  LEA EAX,[EDI + 0x34]
006B7726  50                        PUSH EAX
006B7727  E8 34 39 FF FF            CALL 0x006ab060
006B772C  83 C7 30                  ADD EDI,0x30
006B772F  57                        PUSH EDI
006B7730  E8 2B 39 FF FF            CALL 0x006ab060
006B7735  5E                        POP ESI
006B7736  5B                        POP EBX
LAB_006b7737:
006B7737  5F                        POP EDI
006B7738  5D                        POP EBP
006B7739  C2 04 00                  RET 0x4
