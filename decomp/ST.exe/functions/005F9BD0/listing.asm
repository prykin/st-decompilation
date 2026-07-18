FUN_005f9bd0:
005F9BD0  55                        PUSH EBP
005F9BD1  8B EC                     MOV EBP,ESP
005F9BD3  51                        PUSH ECX
005F9BD4  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
005F9BD7  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005F9BDA  33 C0                     XOR EAX,EAX
005F9BDC  89 01                     MOV dword ptr [ECX],EAX
005F9BDE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005F9BE1  89 02                     MOV dword ptr [EDX],EAX
005F9BE3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005F9BE6  3B CA                     CMP ECX,EDX
005F9BE8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005F9BEB  0F 8D 89 00 00 00         JGE 0x005f9c7a
005F9BF1  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
005F9BF8  53                        PUSH EBX
005F9BF9  56                        PUSH ESI
005F9BFA  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
005F9BFD  57                        PUSH EDI
005F9BFE  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_005f9c01:
005F9C01  66 85 FF                  TEST DI,DI
005F9C04  7C 69                     JL 0x005f9c6f
005F9C06  66 3B FA                  CMP DI,DX
005F9C09  7D 64                     JGE 0x005f9c6f
005F9C0B  66 85 F6                  TEST SI,SI
005F9C0E  7C 5F                     JL 0x005f9c6f
005F9C10  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
005F9C17  7D 56                     JGE 0x005f9c6f
005F9C19  66 85 C9                  TEST CX,CX
005F9C1C  7C 51                     JL 0x005f9c6f
005F9C1E  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
005F9C25  7D 48                     JGE 0x005f9c6f
005F9C27  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
005F9C2E  0F BF C1                  MOVSX EAX,CX
005F9C31  0F AF C7                  IMUL EAX,EDI
005F9C34  0F BF FA                  MOVSX EDI,DX
005F9C37  0F BF DE                  MOVSX EBX,SI
005F9C3A  0F AF FB                  IMUL EDI,EBX
005F9C3D  03 C7                     ADD EAX,EDI
005F9C3F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005F9C42  0F BF DF                  MOVSX EBX,DI
005F9C45  03 C3                     ADD EAX,EBX
005F9C47  8B 1D 48 B2 7F 00         MOV EBX,dword ptr [0x007fb248]
005F9C4D  83 3C C3 00               CMP dword ptr [EBX + EAX*0x8],0x0
005F9C51  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F9C54  74 19                     JZ 0x005f9c6f
005F9C56  85 C0                     TEST EAX,EAX
005F9C58  75 05                     JNZ 0x005f9c5f
005F9C5A  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005F9C5D  89 0A                     MOV dword ptr [EDX],ECX
LAB_005f9c5f:
005F9C5F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005F9C62  40                        INC EAX
005F9C63  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005F9C66  89 0A                     MOV dword ptr [EDX],ECX
005F9C68  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
LAB_005f9c6f:
005F9C6F  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
005F9C72  41                        INC ECX
005F9C73  3B CB                     CMP ECX,EBX
005F9C75  7C 8A                     JL 0x005f9c01
005F9C77  5F                        POP EDI
005F9C78  5E                        POP ESI
005F9C79  5B                        POP EBX
LAB_005f9c7a:
005F9C7A  8B E5                     MOV ESP,EBP
005F9C7C  5D                        POP EBP
005F9C7D  C2 18 00                  RET 0x18
