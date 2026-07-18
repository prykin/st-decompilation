FUN_005f0a30:
005F0A30  56                        PUSH ESI
005F0A31  8B F1                     MOV ESI,ECX
005F0A33  57                        PUSH EDI
005F0A34  8A 86 4F 02 00 00         MOV AL,byte ptr [ESI + 0x24f]
005F0A3A  84 C0                     TEST AL,AL
005F0A3C  0F 84 0B 01 00 00         JZ 0x005f0b4d
005F0A42  66 8B 86 46 02 00 00      MOV AX,word ptr [ESI + 0x246]
005F0A49  66 85 C0                  TEST AX,AX
005F0A4C  0F 8E FB 00 00 00         JLE 0x005f0b4d
005F0A52  66 8B 8E 42 02 00 00      MOV CX,word ptr [ESI + 0x242]
005F0A59  48                        DEC EAX
005F0A5A  50                        PUSH EAX
005F0A5B  66 8B 86 44 02 00 00      MOV AX,word ptr [ESI + 0x244]
005F0A62  50                        PUSH EAX
005F0A63  51                        PUSH ECX
005F0A64  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005F0A6A  E8 CC 42 E1 FF            CALL 0x00404d3b
005F0A6F  85 C0                     TEST EAX,EAX
005F0A71  0F 85 D6 00 00 00         JNZ 0x005f0b4d
005F0A77  66 8B 86 46 02 00 00      MOV AX,word ptr [ESI + 0x246]
005F0A7E  66 8B 8E 42 02 00 00      MOV CX,word ptr [ESI + 0x242]
005F0A85  66 8B 96 44 02 00 00      MOV DX,word ptr [ESI + 0x244]
005F0A8C  66 48                     DEC AX
005F0A8E  66 85 C9                  TEST CX,CX
005F0A91  0F 8C B6 00 00 00         JL 0x005f0b4d
005F0A97  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
005F0A9E  66 3B CF                  CMP CX,DI
005F0AA1  0F 8D A6 00 00 00         JGE 0x005f0b4d
005F0AA7  66 85 D2                  TEST DX,DX
005F0AAA  0F 8C 9D 00 00 00         JL 0x005f0b4d
005F0AB0  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005F0AB7  0F 8D 90 00 00 00         JGE 0x005f0b4d
005F0ABD  66 85 C0                  TEST AX,AX
005F0AC0  0F 8C 87 00 00 00         JL 0x005f0b4d
005F0AC6  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
005F0ACD  7D 7E                     JGE 0x005f0b4d
005F0ACF  53                        PUSH EBX
005F0AD0  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
005F0AD7  0F BF C0                  MOVSX EAX,AX
005F0ADA  0F AF D8                  IMUL EBX,EAX
005F0ADD  0F BF C7                  MOVSX EAX,DI
005F0AE0  0F BF D2                  MOVSX EDX,DX
005F0AE3  0F AF C2                  IMUL EAX,EDX
005F0AE6  03 D8                     ADD EBX,EAX
005F0AE8  0F BF C1                  MOVSX EAX,CX
005F0AEB  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
005F0AF1  03 D8                     ADD EBX,EAX
005F0AF3  8B 3C D9                  MOV EDI,dword ptr [ECX + EBX*0x8]
005F0AF6  5B                        POP EBX
005F0AF7  85 FF                     TEST EDI,EDI
005F0AF9  74 52                     JZ 0x005f0b4d
005F0AFB  8B 17                     MOV EDX,dword ptr [EDI]
005F0AFD  8B CF                     MOV ECX,EDI
005F0AFF  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005F0B02  83 F8 63                  CMP EAX,0x63
005F0B05  75 46                     JNZ 0x005f0b4d
005F0B07  8B 06                     MOV EAX,dword ptr [ESI]
005F0B09  8B CE                     MOV ECX,ESI
005F0B0B  FF 90 38 01 00 00         CALL dword ptr [EAX + 0x138]
005F0B11  8B 16                     MOV EDX,dword ptr [ESI]
005F0B13  50                        PUSH EAX
005F0B14  8B CE                     MOV ECX,ESI
005F0B16  FF 92 30 01 00 00         CALL dword ptr [EDX + 0x130]
005F0B1C  50                        PUSH EAX
005F0B1D  8B 06                     MOV EAX,dword ptr [ESI]
005F0B1F  8B CE                     MOV ECX,ESI
005F0B21  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
005F0B24  50                        PUSH EAX
005F0B25  8B CF                     MOV ECX,EDI
005F0B27  E8 A2 31 E1 FF            CALL 0x00403cce
005F0B2C  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
005F0B2F  8B 16                     MOV EDX,dword ptr [ESI]
005F0B31  50                        PUSH EAX
005F0B32  8B CE                     MOV ECX,ESI
005F0B34  FF 92 AC 00 00 00         CALL dword ptr [EDX + 0xac]
005F0B3A  85 C0                     TEST EAX,EAX
005F0B3C  74 0F                     JZ 0x005f0b4d
005F0B3E  8B CF                     MOV ECX,EDI
005F0B40  E8 5D 30 E1 FF            CALL 0x00403ba2
005F0B45  56                        PUSH ESI
005F0B46  8B CF                     MOV ECX,EDI
005F0B48  E8 F6 1B E1 FF            CALL 0x00402743
LAB_005f0b4d:
005F0B4D  5F                        POP EDI
005F0B4E  5E                        POP ESI
005F0B4F  C3                        RET
