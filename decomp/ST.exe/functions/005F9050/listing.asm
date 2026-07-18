FUN_005f9050:
005F9050  55                        PUSH EBP
005F9051  8B EC                     MOV EBP,ESP
005F9053  83 EC 0C                  SUB ESP,0xc
005F9056  53                        PUSH EBX
005F9057  56                        PUSH ESI
005F9058  57                        PUSH EDI
005F9059  8B F9                     MOV EDI,ECX
005F905B  8D 45 F8                  LEA EAX,[EBP + -0x8]
005F905E  8D 4D FE                  LEA ECX,[EBP + -0x2]
005F9061  50                        PUSH EAX
005F9062  8D 55 FC                  LEA EDX,[EBP + -0x4]
005F9065  33 DB                     XOR EBX,EBX
005F9067  51                        PUSH ECX
005F9068  52                        PUSH EDX
005F9069  8B CF                     MOV ECX,EDI
005F906B  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
005F906E  E8 52 88 E0 FF            CALL 0x004018c5
005F9073  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F9076  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
005F907A  48                        DEC EAX
005F907B  66 85 C9                  TEST CX,CX
005F907E  0F 8C F7 00 00 00         JL 0x005f917b
005F9084  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
005F908B  66 3B CE                  CMP CX,SI
005F908E  0F 8D E7 00 00 00         JGE 0x005f917b
005F9094  66 8B 55 FE               MOV DX,word ptr [EBP + -0x2]
005F9098  66 85 D2                  TEST DX,DX
005F909B  0F 8C DA 00 00 00         JL 0x005f917b
005F90A1  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005F90A8  0F 8D CD 00 00 00         JGE 0x005f917b
005F90AE  66 85 C0                  TEST AX,AX
005F90B1  0F 8C C4 00 00 00         JL 0x005f917b
005F90B7  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
005F90BE  0F 8D B7 00 00 00         JGE 0x005f917b
005F90C4  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
005F90CB  0F BF C0                  MOVSX EAX,AX
005F90CE  0F AF D8                  IMUL EBX,EAX
005F90D1  0F BF C6                  MOVSX EAX,SI
005F90D4  0F BF D2                  MOVSX EDX,DX
005F90D7  0F AF C2                  IMUL EAX,EDX
005F90DA  03 D8                     ADD EBX,EAX
005F90DC  0F BF C1                  MOVSX EAX,CX
005F90DF  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
005F90E5  03 D8                     ADD EBX,EAX
005F90E7  8B 34 D9                  MOV ESI,dword ptr [ECX + EBX*0x8]
005F90EA  85 F6                     TEST ESI,ESI
005F90EC  0F 84 86 00 00 00         JZ 0x005f9178
005F90F2  81 7E 20 E8 03 00 00      CMP dword ptr [ESI + 0x20],0x3e8
005F90F9  75 7D                     JNZ 0x005f9178
005F90FB  8B 16                     MOV EDX,dword ptr [ESI]
005F90FD  8B CE                     MOV ECX,ESI
005F90FF  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005F9102  83 F8 6E                  CMP EAX,0x6e
005F9105  75 71                     JNZ 0x005f9178
005F9107  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005F910A  8B 8F 55 02 00 00         MOV ECX,dword ptr [EDI + 0x255]
005F9110  3B C1                     CMP EAX,ECX
005F9112  75 64                     JNZ 0x005f9178
005F9114  8B CE                     MOV ECX,ESI
005F9116  E8 60 8B E0 FF            CALL 0x00401c7b
005F911B  85 C0                     TEST EAX,EAX
005F911D  75 59                     JNZ 0x005f9178
005F911F  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
005F9122  51                        PUSH ECX
005F9123  8B CE                     MOV ECX,ESI
005F9125  E8 B7 98 E0 FF            CALL 0x004029e1
005F912A  85 C0                     TEST EAX,EAX
005F912C  74 4A                     JZ 0x005f9178
005F912E  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
005F9131  8B CE                     MOV ECX,ESI
005F9133  52                        PUSH EDX
005F9134  E8 B6 B2 E0 FF            CALL 0x004043ef
005F9139  8D 45 F8                  LEA EAX,[EBP + -0x8]
005F913C  8D 4D FE                  LEA ECX,[EBP + -0x2]
005F913F  50                        PUSH EAX
005F9140  8D 55 FC                  LEA EDX,[EBP + -0x4]
005F9143  51                        PUSH ECX
005F9144  52                        PUSH EDX
005F9145  8B CE                     MOV ECX,ESI
005F9147  E8 97 A0 E0 FF            CALL 0x004031e3
005F914C  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005F9152  E8 75 C1 E0 FF            CALL 0x004052cc
005F9157  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005F915A  BB 01 00 00 00            MOV EBX,0x1
005F915F  0F BF 55 F8               MOVSX EDX,word ptr [EBP + -0x8]
005F9163  89 01                     MOV dword ptr [ECX],EAX
005F9165  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F9168  83 EA 5A                  SUB EDX,0x5a
005F916B  5F                        POP EDI
005F916C  89 10                     MOV dword ptr [EAX],EDX
005F916E  8B C3                     MOV EAX,EBX
005F9170  5E                        POP ESI
005F9171  5B                        POP EBX
005F9172  8B E5                     MOV ESP,EBP
005F9174  5D                        POP EBP
005F9175  C2 08 00                  RET 0x8
LAB_005f9178:
005F9178  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_005f917b:
005F917B  5F                        POP EDI
005F917C  8B C3                     MOV EAX,EBX
005F917E  5E                        POP ESI
005F917F  5B                        POP EBX
005F9180  8B E5                     MOV ESP,EBP
005F9182  5D                        POP EBP
005F9183  C2 08 00                  RET 0x8
