FUN_0072f870:
0072F870  55                        PUSH EBP
0072F871  8B EC                     MOV EBP,ESP
0072F873  81 EC 88 00 00 00         SUB ESP,0x88
0072F879  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0072F87D  75 07                     JNZ 0x0072f886
0072F87F  33 C0                     XOR EAX,EAX
0072F881  E9 6A 01 00 00            JMP 0x0072f9f0
LAB_0072f886:
0072F886  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072F889  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0072F88C  83 F9 43                  CMP ECX,0x43
0072F88F  75 4F                     JNZ 0x0072f8e0
0072F891  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072F894  0F BE 42 01               MOVSX EAX,byte ptr [EDX + 0x1]
0072F898  85 C0                     TEST EAX,EAX
0072F89A  75 44                     JNZ 0x0072f8e0
0072F89C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072F89F  C6 01 43                  MOV byte ptr [ECX],0x43
0072F8A2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0072F8A5  C6 42 01 00               MOV byte ptr [EDX + 0x1],0x0
0072F8A9  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
0072F8AD  74 1A                     JZ 0x0072f8c9
0072F8AF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0072F8B2  66 C7 00 00 00            MOV word ptr [EAX],0x0
0072F8B7  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0072F8BA  66 C7 41 02 00 00         MOV word ptr [ECX + 0x2],0x0
0072F8C0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0072F8C3  66 C7 42 04 00 00         MOV word ptr [EDX + 0x4],0x0
LAB_0072f8c9:
0072F8C9  83 7D 14 00               CMP dword ptr [EBP + 0x14],0x0
0072F8CD  74 09                     JZ 0x0072f8d8
0072F8CF  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0072F8D2  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
LAB_0072f8d8:
0072F8D8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072F8DB  E9 10 01 00 00            JMP 0x0072f9f0
LAB_0072f8e0:
0072F8E0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072F8E3  51                        PUSH ECX
0072F8E4  68 A8 11 7F 00            PUSH 0x7f11a8
0072F8E9  E8 42 A8 00 00            CALL 0x0073a130
0072F8EE  83 C4 08                  ADD ESP,0x8
0072F8F1  85 C0                     TEST EAX,EAX
0072F8F3  0F 84 AF 00 00 00         JZ 0x0072f9a8
0072F8F9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072F8FC  52                        PUSH EDX
0072F8FD  68 24 11 7F 00            PUSH 0x7f1124
0072F902  E8 29 A8 00 00            CALL 0x0073a130
0072F907  83 C4 08                  ADD ESP,0x8
0072F90A  85 C0                     TEST EAX,EAX
0072F90C  0F 84 96 00 00 00         JZ 0x0072f9a8
0072F912  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072F915  50                        PUSH EAX
0072F916  8D 8D 78 FF FF FF         LEA ECX,[EBP + 0xffffff78]
0072F91C  51                        PUSH ECX
0072F91D  E8 3E 01 00 00            CALL 0x0072fa60
0072F922  83 C4 08                  ADD ESP,0x8
0072F925  85 C0                     TEST EAX,EAX
0072F927  74 07                     JZ 0x0072f930
0072F929  33 C0                     XOR EAX,EAX
0072F92B  E9 C0 00 00 00            JMP 0x0072f9f0
LAB_0072f930:
0072F930  8D 95 78 FF FF FF         LEA EDX,[EBP + 0xffffff78]
0072F936  52                        PUSH EDX
0072F937  68 98 71 85 00            PUSH 0x857198
0072F93C  8D 85 78 FF FF FF         LEA EAX,[EBP + 0xffffff78]
0072F942  50                        PUSH EAX
0072F943  E8 28 AD 00 00            CALL 0x0073a670
0072F948  83 C4 0C                  ADD ESP,0xc
0072F94B  85 C0                     TEST EAX,EAX
0072F94D  75 07                     JNZ 0x0072f956
0072F94F  33 C0                     XOR EAX,EAX
0072F951  E9 9A 00 00 00            JMP 0x0072f9f0
LAB_0072f956:
0072F956  33 C9                     XOR ECX,ECX
0072F958  66 8B 0D 9C 71 85 00      MOV CX,word ptr [0x0085719c]
0072F95F  89 0D A0 71 85 00         MOV dword ptr [0x008571a0],ECX
0072F965  8D 95 78 FF FF FF         LEA EDX,[EBP + 0xffffff78]
0072F96B  52                        PUSH EDX
0072F96C  68 A8 11 7F 00            PUSH 0x7f11a8
0072F971  E8 4A 02 00 00            CALL 0x0072fbc0
0072F976  83 C4 08                  ADD ESP,0x8
0072F979  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072F97C  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0072F97F  85 C9                     TEST ECX,ECX
0072F981  74 13                     JZ 0x0072f996
0072F983  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072F986  52                        PUSH EDX
0072F987  68 24 11 7F 00            PUSH 0x7f1124
0072F98C  E8 AF A8 00 00            CALL 0x0073a240
0072F991  83 C4 08                  ADD ESP,0x8
0072F994  EB 12                     JMP 0x0072f9a8
LAB_0072f996:
0072F996  68 A8 11 7F 00            PUSH 0x7f11a8
0072F99B  68 24 11 7F 00            PUSH 0x7f1124
0072F9A0  E8 9B A8 00 00            CALL 0x0073a240
0072F9A5  83 C4 08                  ADD ESP,0x8
LAB_0072f9a8:
0072F9A8  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
0072F9AC  74 13                     JZ 0x0072f9c1
0072F9AE  6A 06                     PUSH 0x6
0072F9B0  68 98 71 85 00            PUSH 0x857198
0072F9B5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0072F9B8  50                        PUSH EAX
0072F9B9  E8 72 A9 00 00            CALL 0x0073a330
0072F9BE  83 C4 0C                  ADD ESP,0xc
LAB_0072f9c1:
0072F9C1  83 7D 14 00               CMP dword ptr [EBP + 0x14],0x0
0072F9C5  74 13                     JZ 0x0072f9da
0072F9C7  6A 04                     PUSH 0x4
0072F9C9  68 A0 71 85 00            PUSH 0x8571a0
0072F9CE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0072F9D1  51                        PUSH ECX
0072F9D2  E8 59 A9 00 00            CALL 0x0073a330
0072F9D7  83 C4 0C                  ADD ESP,0xc
LAB_0072f9da:
0072F9DA  68 A8 11 7F 00            PUSH 0x7f11a8
0072F9DF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0072F9E2  52                        PUSH EDX
0072F9E3  E8 58 A8 00 00            CALL 0x0073a240
0072F9E8  83 C4 08                  ADD ESP,0x8
0072F9EB  B8 A8 11 7F 00            MOV EAX,0x7f11a8
LAB_0072f9f0:
0072F9F0  8B E5                     MOV ESP,EBP
0072F9F2  5D                        POP EBP
0072F9F3  C3                        RET
