FUN_00493bc0:
00493BC0  56                        PUSH ESI
00493BC1  57                        PUSH EDI
00493BC2  8B F9                     MOV EDI,ECX
00493BC4  83 BF 5D 04 00 00 15      CMP dword ptr [EDI + 0x45d],0x15
00493BCB  74 0D                     JZ 0x00493bda
00493BCD  83 BF 59 04 00 00 79      CMP dword ptr [EDI + 0x459],0x79
00493BD4  0F 85 91 00 00 00         JNZ 0x00493c6b
LAB_00493bda:
00493BDA  66 8B 87 39 06 00 00      MOV AX,word ptr [EDI + 0x639]
00493BE1  66 8B 8F 3D 06 00 00      MOV CX,word ptr [EDI + 0x63d]
00493BE8  66 8B 97 3B 06 00 00      MOV DX,word ptr [EDI + 0x63b]
00493BEF  66 85 C0                  TEST AX,AX
00493BF2  7C 77                     JL 0x00493c6b
00493BF4  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
00493BFB  66 3B C6                  CMP AX,SI
00493BFE  7D 6B                     JGE 0x00493c6b
00493C00  66 85 D2                  TEST DX,DX
00493C03  7C 66                     JL 0x00493c6b
00493C05  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00493C0C  7D 5D                     JGE 0x00493c6b
00493C0E  66 85 C9                  TEST CX,CX
00493C11  7C 58                     JL 0x00493c6b
00493C13  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00493C1A  7D 4F                     JGE 0x00493c6b
00493C1C  53                        PUSH EBX
00493C1D  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00493C24  0F BF C9                  MOVSX ECX,CX
00493C27  0F AF D9                  IMUL EBX,ECX
00493C2A  0F BF CE                  MOVSX ECX,SI
00493C2D  0F BF D2                  MOVSX EDX,DX
00493C30  0F AF CA                  IMUL ECX,EDX
00493C33  0F BF C0                  MOVSX EAX,AX
00493C36  03 D9                     ADD EBX,ECX
00493C38  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00493C3E  03 D8                     ADD EBX,EAX
00493C40  8B 34 D9                  MOV ESI,dword ptr [ECX + EBX*0x8]
00493C43  5B                        POP EBX
00493C44  85 F6                     TEST ESI,ESI
00493C46  74 23                     JZ 0x00493c6b
00493C48  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00493C4B  8B 87 3F 06 00 00         MOV EAX,dword ptr [EDI + 0x63f]
00493C51  3B D0                     CMP EDX,EAX
00493C53  75 16                     JNZ 0x00493c6b
00493C55  8B 06                     MOV EAX,dword ptr [ESI]
00493C57  8B CE                     MOV ECX,ESI
00493C59  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
00493C5F  85 C0                     TEST EAX,EAX
00493C61  74 08                     JZ 0x00493c6b
00493C63  57                        PUSH EDI
00493C64  8B CE                     MOV ECX,ESI
00493C66  E8 06 0D F7 FF            CALL 0x00404971
LAB_00493c6b:
00493C6B  5F                        POP EDI
00493C6C  5E                        POP ESI
00493C6D  C3                        RET
