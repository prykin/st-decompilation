FUN_006eb4b0:
006EB4B0  55                        PUSH EBP
006EB4B1  8B EC                     MOV EBP,ESP
006EB4B3  53                        PUSH EBX
006EB4B4  56                        PUSH ESI
006EB4B5  57                        PUSH EDI
006EB4B6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006EB4B9  57                        PUSH EDI
006EB4BA  E8 F1 03 FD FF            CALL 0x006bb8b0
006EB4BF  85 C0                     TEST EAX,EAX
006EB4C1  75 68                     JNZ 0x006eb52b
006EB4C3  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006EB4C6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006EB4C9  8D 98 EE 04 00 00         LEA EBX,[EAX + 0x4ee]
006EB4CF  05 EA 04 00 00            ADD EAX,0x4ea
006EB4D4  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_006eb4d7:
006EB4D7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006EB4DA  8B 4F 44                  MOV ECX,dword ptr [EDI + 0x44]
006EB4DD  6A 20                     PUSH 0x20
006EB4DF  53                        PUSH EBX
006EB4E0  50                        PUSH EAX
006EB4E1  51                        PUSH ECX
006EB4E2  E8 59 09 FD FF            CALL 0x006bbe40
006EB4E7  8B F0                     MOV ESI,EAX
006EB4E9  85 F6                     TEST ESI,ESI
006EB4EB  74 3C                     JZ 0x006eb529
006EB4ED  81 FE C2 01 76 88         CMP ESI,0x887601c2
006EB4F3  75 21                     JNZ 0x006eb516
006EB4F5  57                        PUSH EDI
006EB4F6  E8 45 37 FE FF            CALL 0x006cec40
006EB4FB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006EB4FE  40                        INC EAX
006EB4FF  83 F8 02                  CMP EAX,0x2
006EB502  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006EB505  7C D0                     JL 0x006eb4d7
006EB507  57                        PUSH EDI
006EB508  E8 73 04 FD FF            CALL 0x006bb980
006EB50D  8B C6                     MOV EAX,ESI
006EB50F  5F                        POP EDI
006EB510  5E                        POP ESI
006EB511  5B                        POP EBX
006EB512  5D                        POP EBP
006EB513  C2 08 00                  RET 0x8
LAB_006eb516:
006EB516  85 F6                     TEST ESI,ESI
006EB518  74 0F                     JZ 0x006eb529
006EB51A  57                        PUSH EDI
006EB51B  E8 60 04 FD FF            CALL 0x006bb980
006EB520  8B C6                     MOV EAX,ESI
006EB522  5F                        POP EDI
006EB523  5E                        POP ESI
006EB524  5B                        POP EBX
006EB525  5D                        POP EBP
006EB526  C2 08 00                  RET 0x8
LAB_006eb529:
006EB529  33 C0                     XOR EAX,EAX
LAB_006eb52b:
006EB52B  5F                        POP EDI
006EB52C  5E                        POP ESI
006EB52D  5B                        POP EBX
006EB52E  5D                        POP EBP
006EB52F  C2 08 00                  RET 0x8
