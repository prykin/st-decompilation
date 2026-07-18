copy_environ:
007469D0  55                        PUSH EBP
007469D1  8B EC                     MOV EBP,ESP
007469D3  83 EC 10                  SUB ESP,0x10
007469D6  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
007469DD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007469E0  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
007469E3  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
007469E7  75 07                     JNZ 0x007469f0
007469E9  33 C0                     XOR EAX,EAX
007469EB  E9 CA 00 00 00            JMP 0x00746aba
LAB_007469f0:
007469F0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007469F3  8B 11                     MOV EDX,dword ptr [ECX]
007469F5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007469F8  83 C0 04                  ADD EAX,0x4
007469FB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
007469FE  85 D2                     TEST EDX,EDX
00746A00  74 0B                     JZ 0x00746a0d
00746A02  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00746A05  83 C1 01                  ADD ECX,0x1
00746A08  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00746A0B  EB E3                     JMP 0x007469f0
LAB_00746a0d:
00746A0D  68 46 01 00 00            PUSH 0x146
00746A12  68 C8 10 7A 00            PUSH 0x7a10c8
00746A17  6A 02                     PUSH 0x2
00746A19  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00746A1C  8D 04 95 04 00 00 00      LEA EAX,[EDX*0x4 + 0x4]
00746A23  50                        PUSH EAX
00746A24  E8 DB A6 CB FF            CALL 0x00401104
00746A29  83 C4 10                  ADD ESP,0x10
00746A2C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00746A2F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00746A32  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00746A35  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00746A39  75 0A                     JNZ 0x00746a45
00746A3B  6A 09                     PUSH 0x9
00746A3D  E8 0E CE FE FF            CALL 0x00733850
00746A42  83 C4 04                  ADD ESP,0x4
LAB_00746a45:
00746A45  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00746A48  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_00746a4b:
00746A4B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00746A4E  83 38 00                  CMP dword ptr [EAX],0x0
00746A51  74 5B                     JZ 0x00746aae
00746A53  68 4F 01 00 00            PUSH 0x14f
00746A58  68 C8 10 7A 00            PUSH 0x7a10c8
00746A5D  6A 02                     PUSH 0x2
00746A5F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00746A62  8B 11                     MOV EDX,dword ptr [ECX]
00746A64  52                        PUSH EDX
00746A65  E8 A6 01 FF FF            CALL 0x00736c10
00746A6A  83 C4 04                  ADD ESP,0x4
00746A6D  83 C0 01                  ADD EAX,0x1
00746A70  50                        PUSH EAX
00746A71  E8 8E A6 CB FF            CALL 0x00401104
00746A76  83 C4 10                  ADD ESP,0x10
00746A79  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00746A7C  89 01                     MOV dword ptr [ECX],EAX
00746A7E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00746A81  83 3A 00                  CMP dword ptr [EDX],0x0
00746A84  74 14                     JZ 0x00746a9a
00746A86  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00746A89  8B 08                     MOV ECX,dword ptr [EAX]
00746A8B  51                        PUSH ECX
00746A8C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00746A8F  8B 02                     MOV EAX,dword ptr [EDX]
00746A91  50                        PUSH EAX
00746A92  E8 A9 37 FF FF            CALL 0x0073a240
00746A97  83 C4 08                  ADD ESP,0x8
LAB_00746a9a:
00746A9A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00746A9D  83 C1 04                  ADD ECX,0x4
00746AA0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00746AA3  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00746AA6  83 C2 04                  ADD EDX,0x4
00746AA9  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00746AAC  EB 9D                     JMP 0x00746a4b
LAB_00746aae:
00746AAE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00746AB1  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
00746AB7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00746aba:
00746ABA  8B E5                     MOV ESP,EBP
00746ABC  5D                        POP EBP
00746ABD  C3                        RET
