__cropzeros:
00734B70  55                        PUSH EBP
00734B71  8B EC                     MOV EBP,ESP
00734B73  51                        PUSH ECX
LAB_00734b74:
00734B74  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734B77  0F BE 08                  MOVSX ECX,byte ptr [EAX]
00734B7A  85 C9                     TEST ECX,ECX
00734B7C  74 1C                     JZ 0x00734b9a
00734B7E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00734B81  0F BE 02                  MOVSX EAX,byte ptr [EDX]
00734B84  0F BE 0D 90 14 7F 00      MOVSX ECX,byte ptr [0x007f1490]
00734B8B  3B C1                     CMP EAX,ECX
00734B8D  74 0B                     JZ 0x00734b9a
00734B8F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00734B92  83 C2 01                  ADD EDX,0x1
00734B95  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00734B98  EB DA                     JMP 0x00734b74
LAB_00734b9a:
00734B9A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734B9D  0F BE 08                  MOVSX ECX,byte ptr [EAX]
00734BA0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00734BA3  83 C2 01                  ADD EDX,0x1
00734BA6  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00734BA9  85 C9                     TEST ECX,ECX
00734BAB  0F 84 92 00 00 00         JZ 0x00734c43
LAB_00734bb1:
00734BB1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734BB4  0F BE 08                  MOVSX ECX,byte ptr [EAX]
00734BB7  85 C9                     TEST ECX,ECX
00734BB9  74 21                     JZ 0x00734bdc
00734BBB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00734BBE  0F BE 02                  MOVSX EAX,byte ptr [EDX]
00734BC1  83 F8 65                  CMP EAX,0x65
00734BC4  74 16                     JZ 0x00734bdc
00734BC6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00734BC9  0F BE 11                  MOVSX EDX,byte ptr [ECX]
00734BCC  83 FA 45                  CMP EDX,0x45
00734BCF  74 0B                     JZ 0x00734bdc
00734BD1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734BD4  83 C0 01                  ADD EAX,0x1
00734BD7  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00734BDA  EB D5                     JMP 0x00734bb1
LAB_00734bdc:
00734BDC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00734BDF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00734BE2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00734BE5  83 EA 01                  SUB EDX,0x1
00734BE8  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_00734beb:
00734BEB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734BEE  0F BE 08                  MOVSX ECX,byte ptr [EAX]
00734BF1  83 F9 30                  CMP ECX,0x30
00734BF4  75 0B                     JNZ 0x00734c01
00734BF6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00734BF9  83 EA 01                  SUB EDX,0x1
00734BFC  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00734BFF  EB EA                     JMP 0x00734beb
LAB_00734c01:
00734C01  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734C04  0F BE 08                  MOVSX ECX,byte ptr [EAX]
00734C07  0F BE 15 90 14 7F 00      MOVSX EDX,byte ptr [0x007f1490]
00734C0E  3B CA                     CMP ECX,EDX
00734C10  75 09                     JNZ 0x00734c1b
00734C12  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734C15  83 E8 01                  SUB EAX,0x1
00734C18  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_00734c1b:
00734C1B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00734C1E  83 C1 01                  ADD ECX,0x1
00734C21  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00734C24  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00734C27  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00734C2A  8A 08                     MOV CL,byte ptr [EAX]
00734C2C  88 0A                     MOV byte ptr [EDX],CL
00734C2E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00734C31  0F BE 02                  MOVSX EAX,byte ptr [EDX]
00734C34  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00734C37  83 C1 01                  ADD ECX,0x1
00734C3A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00734C3D  85 C0                     TEST EAX,EAX
00734C3F  74 02                     JZ 0x00734c43
00734C41  EB D8                     JMP 0x00734c1b
LAB_00734c43:
00734C43  8B E5                     MOV ESP,EBP
00734C45  5D                        POP EBP
00734C46  C3                        RET
