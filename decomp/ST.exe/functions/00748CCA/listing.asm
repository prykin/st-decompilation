FUN_00748cca:
00748CCA  8B 4C 24 08               MOV ECX,dword ptr [ESP + 0x8]
00748CCE  85 C9                     TEST ECX,ECX
00748CD0  75 0A                     JNZ 0x00748cdc
00748CD2  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
00748CD6  83 60 04 DF               AND dword ptr [EAX + 0x4],0xffffffdf
00748CDA  EB 1E                     JMP 0x00748cfa
LAB_00748cdc:
00748CDC  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
00748CE0  8B 11                     MOV EDX,dword ptr [ECX]
00748CE2  89 50 30                  MOV dword ptr [EAX + 0x30],EDX
00748CE5  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00748CE8  89 50 34                  MOV dword ptr [EAX + 0x34],EDX
00748CEB  8B 54 24 0C               MOV EDX,dword ptr [ESP + 0xc]
00748CEF  8B 12                     MOV EDX,dword ptr [EDX]
00748CF1  2B 11                     SUB EDX,dword ptr [ECX]
00748CF3  83 48 04 20               OR dword ptr [EAX + 0x4],0x20
00748CF7  89 50 38                  MOV dword ptr [EAX + 0x38],EDX
LAB_00748cfa:
00748CFA  33 C0                     XOR EAX,EAX
00748CFC  C2 0C 00                  RET 0xc
