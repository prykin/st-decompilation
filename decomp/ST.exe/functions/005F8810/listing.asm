FUN_005f8810:
005F8810  55                        PUSH EBP
005F8811  8B EC                     MOV EBP,ESP
005F8813  66 8B 81 85 02 00 00      MOV AX,word ptr [ECX + 0x285]
005F881A  66 8B 91 81 02 00 00      MOV DX,word ptr [ECX + 0x281]
005F8821  66 8B 89 7D 02 00 00      MOV CX,word ptr [ECX + 0x27d]
005F8828  56                        PUSH ESI
005F8829  66 85 C9                  TEST CX,CX
005F882C  7C 67                     JL 0x005f8895
005F882E  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
005F8835  66 3B CE                  CMP CX,SI
005F8838  7D 5B                     JGE 0x005f8895
005F883A  66 85 D2                  TEST DX,DX
005F883D  7C 56                     JL 0x005f8895
005F883F  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005F8846  7D 4D                     JGE 0x005f8895
005F8848  66 85 C0                  TEST AX,AX
005F884B  7C 48                     JL 0x005f8895
005F884D  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
005F8854  7D 3F                     JGE 0x005f8895
005F8856  57                        PUSH EDI
005F8857  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
005F885E  0F BF C0                  MOVSX EAX,AX
005F8861  0F AF F8                  IMUL EDI,EAX
005F8864  0F BF C6                  MOVSX EAX,SI
005F8867  0F BF D2                  MOVSX EDX,DX
005F886A  0F AF C2                  IMUL EAX,EDX
005F886D  03 F8                     ADD EDI,EAX
005F886F  0F BF C1                  MOVSX EAX,CX
005F8872  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
005F8878  03 F8                     ADD EDI,EAX
005F887A  8B 4C F9 04               MOV ECX,dword ptr [ECX + EDI*0x8 + 0x4]
005F887E  5F                        POP EDI
005F887F  85 C9                     TEST ECX,ECX
005F8881  74 12                     JZ 0x005f8895
005F8883  81 79 20 BE 00 00 00      CMP dword ptr [ECX + 0x20],0xbe
005F888A  75 09                     JNZ 0x005f8895
005F888C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005F888F  52                        PUSH EDX
005F8890  E8 93 BE E0 FF            CALL 0x00404728
LAB_005f8895:
005F8895  5E                        POP ESI
005F8896  5D                        POP EBP
005F8897  C2 04 00                  RET 0x4
