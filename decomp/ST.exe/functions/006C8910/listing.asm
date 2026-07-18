FUN_006c8910:
006C8910  55                        PUSH EBP
006C8911  8B EC                     MOV EBP,ESP
006C8913  56                        PUSH ESI
006C8914  57                        PUSH EDI
006C8915  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006C8918  85 FF                     TEST EDI,EDI
006C891A  74 06                     JZ 0x006c8922
006C891C  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_006c8922:
006C8922  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C8925  56                        PUSH ESI
006C8926  E8 C5 FE FF FF            CALL 0x006c87f0
006C892B  50                        PUSH EAX
006C892C  E8 3F 23 FE FF            CALL 0x006aac70
006C8931  85 C0                     TEST EAX,EAX
006C8933  75 06                     JNZ 0x006c893b
006C8935  5F                        POP EDI
006C8936  5E                        POP ESI
006C8937  5D                        POP EBP
006C8938  C2 08 00                  RET 0x8
LAB_006c893b:
006C893B  57                        PUSH EDI
006C893C  50                        PUSH EAX
006C893D  56                        PUSH ESI
006C893E  E8 FD FE FF FF            CALL 0x006c8840
006C8943  5F                        POP EDI
006C8944  5E                        POP ESI
006C8945  5D                        POP EBP
006C8946  C2 08 00                  RET 0x8
