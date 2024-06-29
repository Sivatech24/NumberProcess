program GenerateSequences
    implicit none
    integer :: num, i, value
    integer, dimension(9, 1000) :: sequence
    
    do num = 1, 9
        value = num
        sequence(num, 1) = value
        
        do i = 2, 1000
            if (value == 1) then
                exit
            else if (mod(value, 2) /= 0) then
                value = value * 3 + 1
            else
                value = value / 2
            end if
            sequence(num, i) = value
        end do
        
        ! Print the sequence to the console
        write(*, '(A, I0, A)', advance='no') 'Sequence for input ', num, ': '
        do i = 1, 1000
            if (sequence(num, i) == 0) then
                exit
            end if
            write(*, '(I0, A)', advance='no') sequence(num, i), ', '
        end do
        write(*, '(A)') ''
        
        ! Open the file in read mode to position the file pointer
        open(unit=10, file='sequences.txt', status='old')
        close(10)
        
        ! Open the file in write mode to append the new data
        open(unit=10, file='sequences.txt', status='unknown', action='write', position='append')
        write(10, '(A, I0, A)', advance='no') 'Sequence for input ', num, ': '
        do i = 1, 1000
            if (sequence(num, i) == 0) then
                exit
            end if
            write(10, '(I0, A)', advance='no') sequence(num, i), ', '
        end do
        write(10, '(A)') ''
        close(10)
    end do
    
end program GenerateSequences
