FUN_006cf8e4:
006CF8E4  8B 65 E8                  MOV ESP,dword ptr [EBP + -0x18]
006CF8E7  C7 45 DC FB FF FF FF      MOV dword ptr [EBP + -0x24],0xfffffffb
LAB_006cf8ee:
006CF8EE  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_006cf8f5:
006CF8F5  80 7D 34 02               CMP byte ptr [EBP + 0x34],0x2
006CF8F9  75 13                     JNZ 0x006cf90e
006CF8FB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006CF8FE  8B 08                     MOV ECX,dword ptr [EAX]
006CF900  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
006CF903  8B 10                     MOV EDX,dword ptr [EAX]
006CF905  6A 00                     PUSH 0x0
006CF907  50                        PUSH EAX
006CF908  FF 92 80 00 00 00         CALL dword ptr [EDX + 0x80]
LAB_006cf90e:
006CF90E  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
LAB_006cf911:
006CF911  81 FF A0 00 76 88         CMP EDI,0x887600a0
006CF917  74 1D                     JZ 0x006cf936
006CF919  81 FF AE 01 76 88         CMP EDI,0x887601ae
006CF91F  74 15                     JZ 0x006cf936
006CF921  8B C7                     MOV EAX,EDI
006CF923  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CF926  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006CF92D  5F                        POP EDI
006CF92E  5E                        POP ESI
006CF92F  5B                        POP EBX
006CF930  8B E5                     MOV ESP,EBP
006CF932  5D                        POP EBP
006CF933  C2 34 00                  RET 0x34
LAB_006cf936:
006CF936  33 C0                     XOR EAX,EAX
006CF938  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CF93B  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006CF942  5F                        POP EDI
006CF943  5E                        POP ESI
006CF944  5B                        POP EBX
006CF945  8B E5                     MOV ESP,EBP
006CF947  5D                        POP EBP
006CF948  C2 34 00                  RET 0x34
