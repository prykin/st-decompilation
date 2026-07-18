FUN_0068e730:
0068E730  55                        PUSH EBP
0068E731  8B EC                     MOV EBP,ESP
0068E733  56                        PUSH ESI
0068E734  57                        PUSH EDI
0068E735  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0068E738  8B F1                     MOV ESI,ECX
0068E73A  85 FF                     TEST EDI,EDI
0068E73C  75 0B                     JNZ 0x0068e749
0068E73E  5F                        POP EDI
0068E73F  B8 FC FF FF FF            MOV EAX,0xfffffffc
0068E744  5E                        POP ESI
0068E745  5D                        POP EBP
0068E746  C2 04 00                  RET 0x4
LAB_0068e749:
0068E749  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
0068E74C  8B CE                     MOV ECX,ESI
0068E74E  50                        PUSH EAX
0068E74F  E8 9A 44 D7 FF            CALL 0x00402bee
0068E754  85 C0                     TEST EAX,EAX
0068E756  7D 0B                     JGE 0x0068e763
0068E758  5F                        POP EDI
0068E759  B8 FC FF FF FF            MOV EAX,0xfffffffc
0068E75E  5E                        POP ESI
0068E75F  5D                        POP EBP
0068E760  C2 04 00                  RET 0x4
LAB_0068e763:
0068E763  8B 96 A5 00 00 00         MOV EDX,dword ptr [ESI + 0xa5]
0068E769  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
0068E76C  73 0B                     JNC 0x0068e779
0068E76E  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0068E771  0F AF C8                  IMUL ECX,EAX
0068E774  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
0068E777  EB 02                     JMP 0x0068e77b
LAB_0068e779:
0068E779  33 C9                     XOR ECX,ECX
LAB_0068e77b:
0068E77B  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
0068E782  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
0068E788  66 8B 4F 7D               MOV CX,word ptr [EDI + 0x7d]
0068E78C  51                        PUSH ECX
0068E78D  8B CE                     MOV ECX,ESI
0068E78F  E8 C3 71 D7 FF            CALL 0x00405957
0068E794  8B CF                     MOV ECX,EDI
0068E796  E8 8F 67 D7 FF            CALL 0x00404f2a
0068E79B  5F                        POP EDI
0068E79C  33 C0                     XOR EAX,EAX
0068E79E  5E                        POP ESI
0068E79F  5D                        POP EBP
0068E7A0  C2 04 00                  RET 0x4
