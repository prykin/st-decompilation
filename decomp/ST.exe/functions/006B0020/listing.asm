FUN_006b0020:
006B0020  55                        PUSH EBP
006B0021  8B EC                     MOV EBP,ESP
006B0023  56                        PUSH ESI
006B0024  57                        PUSH EDI
006B0025  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006B0028  85 FF                     TEST EDI,EDI
006B002A  74 06                     JZ 0x006b0032
006B002C  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_006b0032:
006B0032  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B0035  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006B0038  0F AF 46 08               IMUL EAX,dword ptr [ESI + 0x8]
006B003C  83 C0 1C                  ADD EAX,0x1c
006B003F  50                        PUSH EAX
006B0040  E8 2B AC FF FF            CALL 0x006aac70
006B0045  85 C0                     TEST EAX,EAX
006B0047  75 06                     JNZ 0x006b004f
006B0049  5F                        POP EDI
006B004A  5E                        POP ESI
006B004B  5D                        POP EBP
006B004C  C2 08 00                  RET 0x8
LAB_006b004f:
006B004F  57                        PUSH EDI
006B0050  50                        PUSH EAX
006B0051  56                        PUSH ESI
006B0052  E8 69 FF FF FF            CALL 0x006affc0
006B0057  5F                        POP EDI
006B0058  5E                        POP ESI
006B0059  5D                        POP EBP
006B005A  C2 08 00                  RET 0x8
