FUN_0075b720:
0075B720  55                        PUSH EBP
0075B721  8B EC                     MOV EBP,ESP
0075B723  53                        PUSH EBX
0075B724  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0075B727  56                        PUSH ESI
0075B728  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075B72B  57                        PUSH EDI
0075B72C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0075B72F  8B 06                     MOV EAX,dword ptr [ESI]
0075B731  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0075B734  83 FF 19                  CMP EDI,0x19
0075B737  0F 8D 95 00 00 00         JGE 0x0075b7d2
LAB_0075b73d:
0075B73D  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
0075B740  85 D2                     TEST EDX,EDX
0075B742  75 68                     JNZ 0x0075b7ac
0075B744  85 C9                     TEST ECX,ECX
0075B746  75 1D                     JNZ 0x0075b765
0075B748  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0075B74B  50                        PUSH EAX
0075B74C  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0075B74F  FF 51 0C                  CALL dword ptr [ECX + 0xc]
0075B752  85 C0                     TEST EAX,EAX
0075B754  0F 84 8F 00 00 00         JZ 0x0075b7e9
0075B75A  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
0075B75D  8B 4A 10                  MOV ECX,dword ptr [EDX + 0x10]
0075B760  8B 01                     MOV EAX,dword ptr [ECX]
0075B762  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
LAB_0075b765:
0075B765  33 D2                     XOR EDX,EDX
0075B767  49                        DEC ECX
0075B768  8A 10                     MOV DL,byte ptr [EAX]
0075B76A  40                        INC EAX
0075B76B  81 FA FF 00 00 00         CMP EDX,0xff
0075B771  75 4E                     JNZ 0x0075b7c1
LAB_0075b773:
0075B773  85 C9                     TEST ECX,ECX
0075B775  75 19                     JNZ 0x0075b790
0075B777  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0075B77A  50                        PUSH EAX
0075B77B  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0075B77E  FF 51 0C                  CALL dword ptr [ECX + 0xc]
0075B781  85 C0                     TEST EAX,EAX
0075B783  74 64                     JZ 0x0075b7e9
0075B785  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
0075B788  8B 4A 10                  MOV ECX,dword ptr [EDX + 0x10]
0075B78B  8B 01                     MOV EAX,dword ptr [ECX]
0075B78D  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
LAB_0075b790:
0075B790  33 D2                     XOR EDX,EDX
0075B792  49                        DEC ECX
0075B793  8A 10                     MOV DL,byte ptr [EAX]
0075B795  40                        INC EAX
0075B796  81 FA FF 00 00 00         CMP EDX,0xff
0075B79C  74 D5                     JZ 0x0075b773
0075B79E  85 D2                     TEST EDX,EDX
0075B7A0  75 07                     JNZ 0x0075b7a9
0075B7A2  BA FF 00 00 00            MOV EDX,0xff
0075B7A7  EB 18                     JMP 0x0075b7c1
LAB_0075b7a9:
0075B7A9  89 56 08                  MOV dword ptr [ESI + 0x8],EDX
LAB_0075b7ac:
0075B7AC  3B 7D 14                  CMP EDI,dword ptr [EBP + 0x14]
0075B7AF  7D 21                     JGE 0x0075b7d2
0075B7B1  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0075B7B4  83 3A 00                  CMP dword ptr [EDX],0x0
0075B7B7  75 06                     JNZ 0x0075b7bf
0075B7B9  C7 02 01 00 00 00         MOV dword ptr [EDX],0x1
LAB_0075b7bf:
0075B7BF  33 D2                     XOR EDX,EDX
LAB_0075b7c1:
0075B7C1  C1 E3 08                  SHL EBX,0x8
0075B7C4  83 C7 08                  ADD EDI,0x8
0075B7C7  0B DA                     OR EBX,EDX
0075B7C9  83 FF 19                  CMP EDI,0x19
0075B7CC  0F 8C 6B FF FF FF         JL 0x0075b73d
LAB_0075b7d2:
0075B7D2  89 7E 10                  MOV dword ptr [ESI + 0x10],EDI
0075B7D5  89 06                     MOV dword ptr [ESI],EAX
0075B7D7  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
0075B7DA  89 5E 0C                  MOV dword ptr [ESI + 0xc],EBX
0075B7DD  5F                        POP EDI
0075B7DE  5E                        POP ESI
0075B7DF  B8 01 00 00 00            MOV EAX,0x1
0075B7E4  5B                        POP EBX
0075B7E5  5D                        POP EBP
0075B7E6  C2 10 00                  RET 0x10
LAB_0075b7e9:
0075B7E9  5F                        POP EDI
0075B7EA  5E                        POP ESI
0075B7EB  33 C0                     XOR EAX,EAX
0075B7ED  5B                        POP EBX
0075B7EE  5D                        POP EBP
0075B7EF  C2 10 00                  RET 0x10
