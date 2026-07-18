FUN_0048d930:
0048D930  53                        PUSH EBX
0048D931  56                        PUSH ESI
0048D932  8B F1                     MOV ESI,ECX
0048D934  57                        PUSH EDI
0048D935  83 BE 5D 04 00 00 0C      CMP dword ptr [ESI + 0x45d],0xc
0048D93C  74 0D                     JZ 0x0048d94b
0048D93E  83 BE 59 04 00 00 70      CMP dword ptr [ESI + 0x459],0x70
0048D945  0F 85 1E 01 00 00         JNZ 0x0048da69
LAB_0048d94b:
0048D94B  66 8B 86 9B 04 00 00      MOV AX,word ptr [ESI + 0x49b]
0048D952  66 8B 8E 9F 04 00 00      MOV CX,word ptr [ESI + 0x49f]
0048D959  66 8B 96 9D 04 00 00      MOV DX,word ptr [ESI + 0x49d]
0048D960  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
0048D967  66 85 C0                  TEST AX,AX
0048D96A  7C 75                     JL 0x0048d9e1
0048D96C  66 3B C3                  CMP AX,BX
0048D96F  7D 70                     JGE 0x0048d9e1
0048D971  66 85 D2                  TEST DX,DX
0048D974  7C 6B                     JL 0x0048d9e1
0048D976  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0048D97D  7D 62                     JGE 0x0048d9e1
0048D97F  66 85 C9                  TEST CX,CX
0048D982  7C 5D                     JL 0x0048d9e1
0048D984  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0048D98B  7D 54                     JGE 0x0048d9e1
0048D98D  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0048D994  0F BF C9                  MOVSX ECX,CX
0048D997  0F AF F9                  IMUL EDI,ECX
0048D99A  0F BF CB                  MOVSX ECX,BX
0048D99D  0F BF D2                  MOVSX EDX,DX
0048D9A0  0F AF CA                  IMUL ECX,EDX
0048D9A3  0F BF C0                  MOVSX EAX,AX
0048D9A6  03 F9                     ADD EDI,ECX
0048D9A8  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0048D9AE  03 F8                     ADD EDI,EAX
0048D9B0  8B 3C F9                  MOV EDI,dword ptr [ECX + EDI*0x8]
0048D9B3  85 FF                     TEST EDI,EDI
0048D9B5  74 2A                     JZ 0x0048d9e1
0048D9B7  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
0048D9BA  8B 86 A1 04 00 00         MOV EAX,dword ptr [ESI + 0x4a1]
0048D9C0  3B D0                     CMP EDX,EAX
0048D9C2  75 1D                     JNZ 0x0048d9e1
0048D9C4  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0048D9C7  8B CF                     MOV ECX,EDI
0048D9C9  50                        PUSH EAX
0048D9CA  E8 C2 7C F7 FF            CALL 0x00405691
0048D9CF  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0048D9D2  51                        PUSH ECX
0048D9D3  8B CF                     MOV ECX,EDI
0048D9D5  E8 F0 52 F7 FF            CALL 0x00402cca
0048D9DA  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
LAB_0048d9e1:
0048D9E1  66 8B 86 A5 04 00 00      MOV AX,word ptr [ESI + 0x4a5]
0048D9E8  66 8B 8E A9 04 00 00      MOV CX,word ptr [ESI + 0x4a9]
0048D9EF  66 8B 96 A7 04 00 00      MOV DX,word ptr [ESI + 0x4a7]
0048D9F6  66 85 C0                  TEST AX,AX
0048D9F9  7C 75                     JL 0x0048da70
0048D9FB  66 3B C3                  CMP AX,BX
0048D9FE  7D 70                     JGE 0x0048da70
0048DA00  66 85 D2                  TEST DX,DX
0048DA03  7C 6B                     JL 0x0048da70
0048DA05  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0048DA0C  7D 62                     JGE 0x0048da70
0048DA0E  66 85 C9                  TEST CX,CX
0048DA11  7C 5D                     JL 0x0048da70
0048DA13  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0048DA1A  7D 54                     JGE 0x0048da70
0048DA1C  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0048DA23  0F BF C9                  MOVSX ECX,CX
0048DA26  0F AF F9                  IMUL EDI,ECX
0048DA29  0F BF CB                  MOVSX ECX,BX
0048DA2C  0F BF D2                  MOVSX EDX,DX
0048DA2F  0F AF CA                  IMUL ECX,EDX
0048DA32  0F BF C0                  MOVSX EAX,AX
0048DA35  03 F9                     ADD EDI,ECX
0048DA37  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0048DA3D  03 F8                     ADD EDI,EAX
0048DA3F  8B 3C F9                  MOV EDI,dword ptr [ECX + EDI*0x8]
0048DA42  85 FF                     TEST EDI,EDI
0048DA44  74 2A                     JZ 0x0048da70
0048DA46  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
0048DA49  8B 86 AB 04 00 00         MOV EAX,dword ptr [ESI + 0x4ab]
0048DA4F  3B D0                     CMP EDX,EAX
0048DA51  75 1D                     JNZ 0x0048da70
0048DA53  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0048DA56  8B CF                     MOV ECX,EDI
0048DA58  50                        PUSH EAX
0048DA59  E8 33 7C F7 FF            CALL 0x00405691
0048DA5E  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0048DA61  51                        PUSH ECX
0048DA62  8B CF                     MOV ECX,EDI
0048DA64  E8 61 52 F7 FF            CALL 0x00402cca
LAB_0048da69:
0048DA69  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
LAB_0048da70:
0048DA70  83 BE 5D 04 00 00 0D      CMP dword ptr [ESI + 0x45d],0xd
0048DA77  74 0D                     JZ 0x0048da86
0048DA79  83 BE 59 04 00 00 71      CMP dword ptr [ESI + 0x459],0x71
0048DA80  0F 85 88 00 00 00         JNZ 0x0048db0e
LAB_0048da86:
0048DA86  66 8B 86 2C 05 00 00      MOV AX,word ptr [ESI + 0x52c]
0048DA8D  66 8B 8E 30 05 00 00      MOV CX,word ptr [ESI + 0x530]
0048DA94  66 8B 96 2E 05 00 00      MOV DX,word ptr [ESI + 0x52e]
0048DA9B  66 85 C0                  TEST AX,AX
0048DA9E  7C 6E                     JL 0x0048db0e
0048DAA0  66 3B C3                  CMP AX,BX
0048DAA3  7D 69                     JGE 0x0048db0e
0048DAA5  66 85 D2                  TEST DX,DX
0048DAA8  7C 64                     JL 0x0048db0e
0048DAAA  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0048DAB1  7D 5B                     JGE 0x0048db0e
0048DAB3  66 85 C9                  TEST CX,CX
0048DAB6  7C 56                     JL 0x0048db0e
0048DAB8  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0048DABF  7D 4D                     JGE 0x0048db0e
0048DAC1  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0048DAC8  0F BF C9                  MOVSX ECX,CX
0048DACB  0F AF F9                  IMUL EDI,ECX
0048DACE  0F BF CB                  MOVSX ECX,BX
0048DAD1  0F BF D2                  MOVSX EDX,DX
0048DAD4  0F AF CA                  IMUL ECX,EDX
0048DAD7  0F BF C0                  MOVSX EAX,AX
0048DADA  03 F9                     ADD EDI,ECX
0048DADC  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0048DAE2  03 F8                     ADD EDI,EAX
0048DAE4  8B 3C F9                  MOV EDI,dword ptr [ECX + EDI*0x8]
0048DAE7  85 FF                     TEST EDI,EDI
0048DAE9  74 23                     JZ 0x0048db0e
0048DAEB  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
0048DAEE  8B 86 32 05 00 00         MOV EAX,dword ptr [ESI + 0x532]
0048DAF4  3B D0                     CMP EDX,EAX
0048DAF6  75 16                     JNZ 0x0048db0e
0048DAF8  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0048DAFB  8B CF                     MOV ECX,EDI
0048DAFD  50                        PUSH EAX
0048DAFE  E8 8E 7B F7 FF            CALL 0x00405691
0048DB03  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0048DB06  51                        PUSH ECX
0048DB07  8B CF                     MOV ECX,EDI
0048DB09  E8 BC 51 F7 FF            CALL 0x00402cca
LAB_0048db0e:
0048DB0E  5F                        POP EDI
0048DB0F  5E                        POP ESI
0048DB10  5B                        POP EBX
0048DB11  C3                        RET
