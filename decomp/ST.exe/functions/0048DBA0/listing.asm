STBoatC::sub_0048DBA0:
0048DBA0  56                        PUSH ESI
0048DBA1  8B F1                     MOV ESI,ECX
0048DBA3  57                        PUSH EDI
0048DBA4  83 BE 5D 04 00 00 04      CMP dword ptr [ESI + 0x45d],0x4
0048DBAB  74 0D                     JZ 0x0048dbba
0048DBAD  83 BE 59 04 00 00 68      CMP dword ptr [ESI + 0x459],0x68
0048DBB4  0F 85 A3 00 00 00         JNZ 0x0048dc5d
LAB_0048dbba:
0048DBBA  66 8B 86 54 05 00 00      MOV AX,word ptr [ESI + 0x554]
0048DBC1  66 8B 8E 58 05 00 00      MOV CX,word ptr [ESI + 0x558]
0048DBC8  66 8B 96 56 05 00 00      MOV DX,word ptr [ESI + 0x556]
0048DBCF  66 85 C0                  TEST AX,AX
0048DBD2  0F 8C 85 00 00 00         JL 0x0048dc5d
0048DBD8  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0048DBDF  66 3B C7                  CMP AX,DI
0048DBE2  7D 79                     JGE 0x0048dc5d
0048DBE4  66 85 D2                  TEST DX,DX
0048DBE7  7C 74                     JL 0x0048dc5d
0048DBE9  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0048DBF0  7D 6B                     JGE 0x0048dc5d
0048DBF2  66 85 C9                  TEST CX,CX
0048DBF5  7C 66                     JL 0x0048dc5d
0048DBF7  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0048DBFE  7D 5D                     JGE 0x0048dc5d
0048DC00  53                        PUSH EBX
0048DC01  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0048DC08  0F BF C9                  MOVSX ECX,CX
0048DC0B  0F AF D9                  IMUL EBX,ECX
0048DC0E  0F BF CF                  MOVSX ECX,DI
0048DC11  0F BF D2                  MOVSX EDX,DX
0048DC14  0F AF CA                  IMUL ECX,EDX
0048DC17  0F BF C0                  MOVSX EAX,AX
0048DC1A  03 D9                     ADD EBX,ECX
0048DC1C  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0048DC22  03 D8                     ADD EBX,EAX
0048DC24  8B 3C D9                  MOV EDI,dword ptr [ECX + EBX*0x8]
0048DC27  5B                        POP EBX
0048DC28  85 FF                     TEST EDI,EDI
0048DC2A  74 31                     JZ 0x0048dc5d
0048DC2C  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
0048DC2F  8B 86 5A 05 00 00         MOV EAX,dword ptr [ESI + 0x55a]
0048DC35  3B D0                     CMP EDX,EAX
0048DC37  75 24                     JNZ 0x0048dc5d
0048DC39  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0048DC3C  8B 8E 68 05 00 00         MOV ECX,dword ptr [ESI + 0x568]
0048DC42  50                        PUSH EAX
0048DC43  51                        PUSH ECX
0048DC44  8B CF                     MOV ECX,EDI
0048DC46  E8 D8 6F F7 FF            CALL 0x00404c23
0048DC4B  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0048DC4E  8B 86 68 05 00 00         MOV EAX,dword ptr [ESI + 0x568]
0048DC54  52                        PUSH EDX
0048DC55  50                        PUSH EAX
0048DC56  8B CF                     MOV ECX,EDI
0048DC58  E8 CB 60 F7 FF            CALL 0x00403d28
LAB_0048dc5d:
0048DC5D  5F                        POP EDI
0048DC5E  5E                        POP ESI
0048DC5F  C3                        RET
