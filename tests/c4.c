for(int i=0; i<10; i++){
  job_array[i] = Job(job_id = i, flops_required = 10, deadline = 10 + i*5,
                     mem_required = 64, affinity = [0.2,0.7,1,2]);
}
				
for(int i=0; i<10; i++){
  mem1 = Memory(memory_type = 'primary', mem_size = 512);
  processor_array[i] = Processor(isa = 'ARM', clock_speed : 40,
                                 l1_memory = mem1);
}

ram = Memory(memory_type = 'primary', mem_size = 4096, name = "ram1");
cluster_1 = Cluster(processors=processor_array,topology = "ring",
                    50, 40, name = "cluster1");
link_1 = Link(start_point = "cluster1", end_point= "ram1", 40, 50);

cluster_1.submit_jobs(job_array);
run(cluster_1);





