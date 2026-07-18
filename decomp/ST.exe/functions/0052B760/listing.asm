FUN_0052b760:
0052B760  55                        PUSH EBP
0052B761  8B EC                     MOV EBP,ESP
0052B763  33 C0                     XOR EAX,EAX
0052B765  BA 03 00 00 00            MOV EDX,0x3
0052B76A  8A 41 68                  MOV AL,byte ptr [ECX + 0x68]
0052B76D  53                        PUSH EBX
0052B76E  48                        DEC EAX
0052B76F  3B C2                     CMP EAX,EDX
0052B771  77 2F                     JA 0x0052b7a2
switchD_0052b773::switchD:
0052B773  FF 24 85 40 B8 52 00      JMP dword ptr [EAX*0x4 + 0x52b840]
switchD_0052b773::caseD_1:
0052B77A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052B77D  66 89 50 14               MOV word ptr [EAX + 0x14],DX
0052B781  EB 36                     JMP 0x0052b7b9
switchD_0052b773::caseD_2:
0052B783  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052B786  66 C7 40 14 02 00         MOV word ptr [EAX + 0x14],0x2
0052B78C  EB 2B                     JMP 0x0052b7b9
switchD_0052b773::caseD_3:
0052B78E  8A 1D 4E 87 80 00         MOV BL,byte ptr [0x0080874e]
0052B794  2A DA                     SUB BL,DL
0052B796  F6 DB                     NEG BL
0052B798  1B DB                     SBB EBX,EBX
0052B79A  83 E3 FD                  AND EBX,0xfffffffd
0052B79D  83 C3 04                  ADD EBX,0x4
0052B7A0  EB 10                     JMP 0x0052b7b2
switchD_0052b773::caseD_4:
0052B7A2  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052B7A7  33 DB                     XOR EBX,EBX
0052B7A9  3A C2                     CMP AL,DL
0052B7AB  0F 95 C3                  SETNZ BL
0052B7AE  4B                        DEC EBX
0052B7AF  83 E3 05                  AND EBX,0x5
LAB_0052b7b2:
0052B7B2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052B7B5  66 89 58 14               MOV word ptr [EAX + 0x14],BX
LAB_0052b7b9:
0052B7B9  33 DB                     XOR EBX,EBX
0052B7BB  66 C7 40 16 02 00         MOV word ptr [EAX + 0x16],0x2
0052B7C1  8A 59 68                  MOV BL,byte ptr [ECX + 0x68]
0052B7C4  8B CB                     MOV ECX,EBX
0052B7C6  49                        DEC ECX
0052B7C7  3B CA                     CMP ECX,EDX
0052B7C9  77 59                     JA 0x0052b824
switchD_0052b7cb::switchD:
0052B7CB  FF 24 8D 50 B8 52 00      JMP dword ptr [ECX*0x4 + 0x52b850]
switchD_0052b7cb::caseD_1:
0052B7D2  C7 40 18 1C 27 00 00      MOV dword ptr [EAX + 0x18],0x271c
0052B7D9  5B                        POP EBX
0052B7DA  5D                        POP EBP
0052B7DB  C2 04 00                  RET 0x4
switchD_0052b7cb::caseD_2:
0052B7DE  C7 40 18 1D 27 00 00      MOV dword ptr [EAX + 0x18],0x271d
0052B7E5  5B                        POP EBX
0052B7E6  5D                        POP EBP
0052B7E7  C2 04 00                  RET 0x4
switchD_0052b7cb::caseD_3:
0052B7EA  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0052B7F0  5B                        POP EBX
0052B7F1  2A CA                     SUB CL,DL
0052B7F3  F6 D9                     NEG CL
0052B7F5  1B C9                     SBB ECX,ECX
0052B7F7  83 E1 ED                  AND ECX,0xffffffed
0052B7FA  81 C1 31 27 00 00         ADD ECX,0x2731
0052B800  89 48 18                  MOV dword ptr [EAX + 0x18],ECX
0052B803  5D                        POP EBP
0052B804  C2 04 00                  RET 0x4
switchD_0052b7cb::caseD_4:
0052B807  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0052B80D  5B                        POP EBX
0052B80E  2A CA                     SUB CL,DL
0052B810  F6 D9                     NEG CL
0052B812  1B C9                     SBB ECX,ECX
0052B814  83 E1 F0                  AND ECX,0xfffffff0
0052B817  81 C1 30 27 00 00         ADD ECX,0x2730
0052B81D  89 48 18                  MOV dword ptr [EAX + 0x18],ECX
0052B820  5D                        POP EBP
0052B821  C2 04 00                  RET 0x4
switchD_0052b7cb::default:
0052B824  8B 1D 97 8A 80 00         MOV EBX,dword ptr [0x00808a97]
0052B82A  33 D2                     XOR EDX,EDX
0052B82C  83 FB FF                  CMP EBX,-0x1
0052B82F  5B                        POP EBX
0052B830  0F 94 C2                  SETZ DL
0052B833  81 C2 48 27 00 00         ADD EDX,0x2748
0052B839  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
0052B83C  5D                        POP EBP
0052B83D  C2 04 00                  RET 0x4
