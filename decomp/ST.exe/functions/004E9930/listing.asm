FUN_004e9930:
004E9930  8B 81 F8 04 00 00         MOV EAX,dword ptr [ECX + 0x4f8]
004E9936  85 C0                     TEST EAX,EAX
004E9938  74 0A                     JZ 0x004e9944
004E993A  8B 91 FC 04 00 00         MOV EDX,dword ptr [ECX + 0x4fc]
004E9940  85 D2                     TEST EDX,EDX
004E9942  75 02                     JNZ 0x004e9946
LAB_004e9944:
004E9944  33 C0                     XOR EAX,EAX
LAB_004e9946:
004E9946  C3                        RET
