FUN_00734ac0:
00734AC0  55                        PUSH EBP
00734AC1  8B EC                     MOV EBP,ESP
00734AC3  83 EC 0C                  SUB ESP,0xc
00734AC6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734AC9  0F BE 08                  MOVSX ECX,byte ptr [EAX]
00734ACC  51                        PUSH ECX
00734ACD  E8 0E BC FF FF            CALL 0x007306e0
00734AD2  83 C4 04                  ADD ESP,0x4
00734AD5  83 F8 65                  CMP EAX,0x65
00734AD8  74 46                     JZ 0x00734b20
LAB_00734ada:
00734ADA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00734ADD  83 C2 01                  ADD EDX,0x1
00734AE0  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00734AE3  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
00734AEA  7E 16                     JLE 0x00734b02
00734AEC  6A 04                     PUSH 0x4
00734AEE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734AF1  0F BE 08                  MOVSX ECX,byte ptr [EAX]
00734AF4  51                        PUSH ECX
00734AF5  E8 16 BB FF FF            CALL 0x00730610
00734AFA  83 C4 08                  ADD ESP,0x8
00734AFD  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00734B00  EB 18                     JMP 0x00734b1a
LAB_00734b02:
00734B02  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00734B05  0F BE 02                  MOVSX EAX,byte ptr [EDX]
00734B08  8B 0D 80 12 7F 00         MOV ECX,dword ptr [0x007f1280]
00734B0E  33 D2                     XOR EDX,EDX
00734B10  66 8B 14 41               MOV DX,word ptr [ECX + EAX*0x2]
00734B14  83 E2 04                  AND EDX,0x4
00734B17  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_00734b1a:
00734B1A  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
00734B1E  75 BA                     JNZ 0x00734ada
LAB_00734b20:
00734B20  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734B23  8A 08                     MOV CL,byte ptr [EAX]
00734B25  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
00734B28  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00734B2B  A0 90 14 7F 00            MOV AL,[0x007f1490]
00734B30  88 02                     MOV byte ptr [EDX],AL
00734B32  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00734B35  83 C1 01                  ADD ECX,0x1
00734B38  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_00734b3b:
00734B3B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00734B3E  8A 02                     MOV AL,byte ptr [EDX]
00734B40  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00734B43  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00734B46  8A 55 F8                  MOV DL,byte ptr [EBP + -0x8]
00734B49  88 11                     MOV byte ptr [ECX],DL
00734B4B  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
00734B4E  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
00734B51  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00734B54  0F BE 11                  MOVSX EDX,byte ptr [ECX]
00734B57  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734B5A  83 C0 01                  ADD EAX,0x1
00734B5D  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00734B60  85 D2                     TEST EDX,EDX
00734B62  75 D7                     JNZ 0x00734b3b
00734B64  8B E5                     MOV ESP,EBP
00734B66  5D                        POP EBP
00734B67  C3                        RET
