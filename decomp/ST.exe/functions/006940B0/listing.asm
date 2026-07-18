FUN_006940b0:
006940B0  55                        PUSH EBP
006940B1  8B EC                     MOV EBP,ESP
006940B3  56                        PUSH ESI
006940B4  57                        PUSH EDI
006940B5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006940B8  8B F1                     MOV ESI,ECX
006940BA  57                        PUSH EDI
006940BB  E8 53 F8 D6 FF            CALL 0x00403913
006940C0  85 C0                     TEST EAX,EAX
006940C2  74 17                     JZ 0x006940db
006940C4  57                        PUSH EDI
006940C5  8B CE                     MOV ECX,ESI
006940C7  E8 09 E6 D6 FF            CALL 0x004026d5
006940CC  8A 46 10                  MOV AL,byte ptr [ESI + 0x10]
006940CF  8B CE                     MOV ECX,ESI
006940D1  FE C8                     DEC AL
006940D3  88 46 10                  MOV byte ptr [ESI + 0x10],AL
006940D6  E8 97 EE D6 FF            CALL 0x00402f72
LAB_006940db:
006940DB  5F                        POP EDI
006940DC  5E                        POP ESI
006940DD  5D                        POP EBP
006940DE  C2 04 00                  RET 0x4
