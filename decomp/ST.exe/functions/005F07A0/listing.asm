FUN_005f07a0:
005F07A0  55                        PUSH EBP
005F07A1  8B EC                     MOV EBP,ESP
005F07A3  83 EC 0C                  SUB ESP,0xc
005F07A6  53                        PUSH EBX
005F07A7  56                        PUSH ESI
005F07A8  8B F1                     MOV ESI,ECX
005F07AA  57                        PUSH EDI
005F07AB  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
005F07B2  8A 86 4F 02 00 00         MOV AL,byte ptr [ESI + 0x24f]
005F07B8  84 C0                     TEST AL,AL
005F07BA  0F 85 68 01 00 00         JNZ 0x005f0928
005F07C0  66 8B 86 46 02 00 00      MOV AX,word ptr [ESI + 0x246]
005F07C7  66 85 C0                  TEST AX,AX
005F07CA  0F 8E 58 01 00 00         JLE 0x005f0928
005F07D0  66 8B 8E 42 02 00 00      MOV CX,word ptr [ESI + 0x242]
005F07D7  48                        DEC EAX
005F07D8  50                        PUSH EAX
005F07D9  66 8B 86 44 02 00 00      MOV AX,word ptr [ESI + 0x244]
005F07E0  50                        PUSH EAX
005F07E1  51                        PUSH ECX
005F07E2  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005F07E8  E8 4E 45 E1 FF            CALL 0x00404d3b
005F07ED  85 C0                     TEST EAX,EAX
005F07EF  0F 85 33 01 00 00         JNZ 0x005f0928
005F07F5  66 8B 86 46 02 00 00      MOV AX,word ptr [ESI + 0x246]
005F07FC  66 8B 8E 42 02 00 00      MOV CX,word ptr [ESI + 0x242]
005F0803  66 8B 96 44 02 00 00      MOV DX,word ptr [ESI + 0x244]
005F080A  66 48                     DEC AX
005F080C  66 85 C9                  TEST CX,CX
005F080F  0F 8C 13 01 00 00         JL 0x005f0928
005F0815  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
005F081C  66 3B CF                  CMP CX,DI
005F081F  0F 8D 03 01 00 00         JGE 0x005f0928
005F0825  66 85 D2                  TEST DX,DX
005F0828  0F 8C FA 00 00 00         JL 0x005f0928
005F082E  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005F0835  0F 8D ED 00 00 00         JGE 0x005f0928
005F083B  66 85 C0                  TEST AX,AX
005F083E  0F 8C E4 00 00 00         JL 0x005f0928
005F0844  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
005F084B  0F 8D D7 00 00 00         JGE 0x005f0928
005F0851  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
005F0858  0F BF C0                  MOVSX EAX,AX
005F085B  0F AF D8                  IMUL EBX,EAX
005F085E  0F BF C7                  MOVSX EAX,DI
005F0861  0F BF D2                  MOVSX EDX,DX
005F0864  0F AF C2                  IMUL EAX,EDX
005F0867  03 D8                     ADD EBX,EAX
005F0869  0F BF C1                  MOVSX EAX,CX
005F086C  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
005F0872  03 D8                     ADD EBX,EAX
005F0874  8B 3C D9                  MOV EDI,dword ptr [ECX + EBX*0x8]
005F0877  85 FF                     TEST EDI,EDI
005F0879  0F 84 A9 00 00 00         JZ 0x005f0928
005F087F  8B 17                     MOV EDX,dword ptr [EDI]
005F0881  8B CF                     MOV ECX,EDI
005F0883  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005F0886  83 F8 63                  CMP EAX,0x63
005F0889  0F 85 99 00 00 00         JNZ 0x005f0928
005F088F  56                        PUSH ESI
005F0890  8B CF                     MOV ECX,EDI
005F0892  E8 95 0D E1 FF            CALL 0x0040162c
005F0897  85 C0                     TEST EAX,EAX
005F0899  0F 84 89 00 00 00         JZ 0x005f0928
005F089F  57                        PUSH EDI
005F08A0  8B CE                     MOV ECX,ESI
005F08A2  E8 F3 35 E1 FF            CALL 0x00403e9a
005F08A7  85 C0                     TEST EAX,EAX
005F08A9  74 7D                     JZ 0x005f0928
005F08AB  8B CF                     MOV ECX,EDI
005F08AD  E8 D1 47 E1 FF            CALL 0x00405083
005F08B2  85 C0                     TEST EAX,EAX
005F08B4  74 6A                     JZ 0x005f0920
005F08B6  8D 45 FA                  LEA EAX,[EBP + -0x6]
005F08B9  8D 4D FC                  LEA ECX,[EBP + -0x4]
005F08BC  50                        PUSH EAX
005F08BD  8D 55 FE                  LEA EDX,[EBP + -0x2]
005F08C0  51                        PUSH ECX
005F08C1  52                        PUSH EDX
005F08C2  8B CF                     MOV ECX,EDI
005F08C4  E8 FC 0F E1 FF            CALL 0x004018c5
005F08C9  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
005F08CD  40                        INC EAX
005F08CE  6A 3C                     PUSH 0x3c
005F08D0  6A 01                     PUSH 0x1
005F08D2  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005F08D5  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
005F08D8  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
005F08DB  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
005F08DF  40                        INC EAX
005F08E0  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005F08E3  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
005F08E6  8D 1C C8                  LEA EBX,[EAX + ECX*0x8]
005F08E9  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
005F08ED  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005F08F0  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
005F08F3  8D 84 C8 96 00 00 00      LEA EAX,[EAX + ECX*0x8 + 0x96]
005F08FA  8B 8E BA 02 00 00         MOV ECX,dword ptr [ESI + 0x2ba]
005F0900  51                        PUSH ECX
005F0901  50                        PUSH EAX
005F0902  53                        PUSH EBX
005F0903  52                        PUSH EDX
005F0904  8B CE                     MOV ECX,ESI
005F0906  E8 BB 36 E1 FF            CALL 0x00403fc6
005F090B  85 C0                     TEST EAX,EAX
005F090D  74 11                     JZ 0x005f0920
005F090F  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
005F0916  5F                        POP EDI
005F0917  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005F091A  5E                        POP ESI
005F091B  5B                        POP EBX
005F091C  8B E5                     MOV ESP,EBP
005F091E  5D                        POP EBP
005F091F  C3                        RET
LAB_005f0920:
005F0920  56                        PUSH ESI
005F0921  8B CF                     MOV ECX,EDI
005F0923  E8 1B 1E E1 FF            CALL 0x00402743
LAB_005f0928:
005F0928  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005F092B  5F                        POP EDI
005F092C  5E                        POP ESI
005F092D  5B                        POP EBX
005F092E  8B E5                     MOV ESP,EBP
005F0930  5D                        POP EBP
005F0931  C3                        RET
