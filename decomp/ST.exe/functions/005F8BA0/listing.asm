FUN_005f8ba0:
005F8BA0  55                        PUSH EBP
005F8BA1  8B EC                     MOV EBP,ESP
005F8BA3  53                        PUSH EBX
005F8BA4  56                        PUSH ESI
005F8BA5  57                        PUSH EDI
005F8BA6  8B F9                     MOV EDI,ECX
005F8BA8  33 C0                     XOR EAX,EAX
005F8BAA  8B B7 85 02 00 00         MOV ESI,dword ptr [EDI + 0x285]
005F8BB0  83 FE 05                  CMP ESI,0x5
005F8BB3  0F 8D B9 00 00 00         JGE 0x005f8c72
LAB_005f8bb9:
005F8BB9  66 8B 87 81 02 00 00      MOV AX,word ptr [EDI + 0x281]
005F8BC0  66 8B 8F 7D 02 00 00      MOV CX,word ptr [EDI + 0x27d]
005F8BC7  56                        PUSH ESI
005F8BC8  50                        PUSH EAX
005F8BC9  51                        PUSH ECX
005F8BCA  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005F8BD0  E8 66 C1 E0 FF            CALL 0x00404d3b
005F8BD5  85 C0                     TEST EAX,EAX
005F8BD7  74 65                     JZ 0x005f8c3e
005F8BD9  66 8B 87 7D 02 00 00      MOV AX,word ptr [EDI + 0x27d]
005F8BE0  66 8B 8F 81 02 00 00      MOV CX,word ptr [EDI + 0x281]
005F8BE7  66 85 C0                  TEST AX,AX
005F8BEA  7C 5D                     JL 0x005f8c49
005F8BEC  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
005F8BF3  7D 54                     JGE 0x005f8c49
005F8BF5  66 85 C9                  TEST CX,CX
005F8BF8  7C 4F                     JL 0x005f8c49
005F8BFA  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
005F8C01  7D 46                     JGE 0x005f8c49
005F8C03  66 85 F6                  TEST SI,SI
005F8C06  7C 41                     JL 0x005f8c49
005F8C08  66 3B 35 44 B2 7F 00      CMP SI,word ptr [0x007fb244]
005F8C0F  7D 38                     JGE 0x005f8c49
005F8C11  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
005F8C18  0F BF D6                  MOVSX EDX,SI
005F8C1B  0F AF D3                  IMUL EDX,EBX
005F8C1E  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
005F8C25  0F BF C9                  MOVSX ECX,CX
005F8C28  0F AF D9                  IMUL EBX,ECX
005F8C2B  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
005F8C31  03 D3                     ADD EDX,EBX
005F8C33  0F BF C0                  MOVSX EAX,AX
005F8C36  03 D0                     ADD EDX,EAX
005F8C38  83 3C D1 00               CMP dword ptr [ECX + EDX*0x8],0x0
005F8C3C  74 0B                     JZ 0x005f8c49
LAB_005f8c3e:
005F8C3E  46                        INC ESI
005F8C3F  83 FE 05                  CMP ESI,0x5
005F8C42  7D 2C                     JGE 0x005f8c70
005F8C44  E9 70 FF FF FF            JMP 0x005f8bb9
LAB_005f8c49:
005F8C49  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005F8C4C  8B 97 7D 02 00 00         MOV EDX,dword ptr [EDI + 0x27d]
005F8C52  B8 01 00 00 00            MOV EAX,0x1
005F8C57  89 11                     MOV dword ptr [ECX],EDX
005F8C59  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005F8C5C  8B 97 81 02 00 00         MOV EDX,dword ptr [EDI + 0x281]
005F8C62  5F                        POP EDI
005F8C63  89 11                     MOV dword ptr [ECX],EDX
005F8C65  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005F8C68  89 32                     MOV dword ptr [EDX],ESI
005F8C6A  5E                        POP ESI
005F8C6B  5B                        POP EBX
005F8C6C  5D                        POP EBP
005F8C6D  C2 0C 00                  RET 0xc
LAB_005f8c70:
005F8C70  33 C0                     XOR EAX,EAX
LAB_005f8c72:
005F8C72  5F                        POP EDI
005F8C73  5E                        POP ESI
005F8C74  5B                        POP EBX
005F8C75  5D                        POP EBP
005F8C76  C2 0C 00                  RET 0xc
