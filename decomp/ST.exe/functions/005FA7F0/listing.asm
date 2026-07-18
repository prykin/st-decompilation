FUN_005fa7f0:
005FA7F0  55                        PUSH EBP
005FA7F1  8B EC                     MOV EBP,ESP
005FA7F3  53                        PUSH EBX
005FA7F4  56                        PUSH ESI
005FA7F5  57                        PUSH EDI
005FA7F6  8B F1                     MOV ESI,ECX
005FA7F8  6A 06                     PUSH 0x6
005FA7FA  E8 91 B4 E0 FF            CALL 0x00405c90
005FA7FF  6A 05                     PUSH 0x5
005FA801  8B CE                     MOV ECX,ESI
005FA803  E8 FD A8 E0 FF            CALL 0x00405105
005FA808  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005FA80B  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
005FA80E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FA811  57                        PUSH EDI
005FA812  53                        PUSH EBX
005FA813  50                        PUSH EAX
005FA814  8B CE                     MOV ECX,ESI
005FA816  E8 FD 9A E0 FF            CALL 0x00404318
005FA81B  85 C0                     TEST EAX,EAX
005FA81D  74 34                     JZ 0x005fa853
005FA81F  83 F8 FF                  CMP EAX,-0x1
005FA822  74 05                     JZ 0x005fa829
005FA824  83 F8 01                  CMP EAX,0x1
005FA827  74 09                     JZ 0x005fa832
LAB_005fa829:
005FA829  5F                        POP EDI
005FA82A  5E                        POP ESI
005FA82B  33 C0                     XOR EAX,EAX
005FA82D  5B                        POP EBX
005FA82E  5D                        POP EBP
005FA82F  C2 0C 00                  RET 0xc
LAB_005fa832:
005FA832  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005FA835  89 BE 99 02 00 00         MOV dword ptr [ESI + 0x299],EDI
005FA83B  89 8E 91 02 00 00         MOV dword ptr [ESI + 0x291],ECX
005FA841  89 9E 95 02 00 00         MOV dword ptr [ESI + 0x295],EBX
005FA847  5F                        POP EDI
005FA848  5E                        POP ESI
005FA849  B8 02 00 00 00            MOV EAX,0x2
005FA84E  5B                        POP EBX
005FA84F  5D                        POP EBP
005FA850  C2 0C 00                  RET 0xc
LAB_005fa853:
005FA853  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005FA856  89 BE 99 02 00 00         MOV dword ptr [ESI + 0x299],EDI
005FA85C  89 96 91 02 00 00         MOV dword ptr [ESI + 0x291],EDX
005FA862  89 9E 95 02 00 00         MOV dword ptr [ESI + 0x295],EBX
005FA868  5F                        POP EDI
005FA869  5E                        POP ESI
005FA86A  B8 01 00 00 00            MOV EAX,0x1
005FA86F  5B                        POP EBX
005FA870  5D                        POP EBP
005FA871  C2 0C 00                  RET 0xc
